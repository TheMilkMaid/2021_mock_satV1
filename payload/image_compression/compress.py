from PIL import Image
import time


def compress_img(img: Path, outpath: Path):



    """ 
    params: 
        img: Path to the input image
    returns:
        outpath: Path to the compressed image (.jpeg)
    """ 


			


	img1 = Image.open(img)
	
	time0 = time.time()
	img1.save(outpath, quality=75)
	compress_time = time.time() - time0
	print(compress_time)


