import os
import zipfile

def get_epub_cover_images(epub_files):
  """获取多个epub文件的封面图片。

  Args:
    epub_files: epub文件路径列表。

  Returns:
    封面图片字典，key为epub文件路径，value为封面图片的二进制数据。
  """

  cover_images = {}
  for epub_file in epub_files:
    with zipfile.ZipFile(epub_file) as z:
      with z.open("META-INF/container.xml") as f:
        container_xml = f.read().decode("utf-8")

      full_path = re.findall(r'<rootfile full-path="(.*?)"', container_xml)[0]

      with z.open(full_path) as f:
        cover_images[epub_file] = f.read()

  return cover_images


if __name__ == "__main__":
  epub_files = ["example1.epub", "example2.epub"]
  cover_images = get_epub_cover_images(epub_files)

  for epub_file, cover_image in cover_images.items():
    with open(os.path.basename(epub_file) + "_cover.jpg", "wb") as f:
      f.write(cover_image)
