from picamera import PiCamera
from time import sleep

def capture_img(imgpath):
    """
    params: 
        imgpath: Path to location to store the image. End path name with ".png" or ".jpeg".
    """ 
    
    camera = PiCamera()
    camera.resolution = (2592,1944) # 4:3 aspect ratio
    camera.start_preview()
    sleep(1)
    camera.capture(imgpath)
    camera.stop_preview()
    
