class MediaPlayer{
	String type;
	int size;
//	constructor
	MediaPlayer() {
		this.type = "Not Given";
		this.size = 0;
	}
	MediaPlayer(String type, int size) {
		super();
		this.type = type;
		this.size = size;
	}
//	setters and getters
	String getType() {
		return type;
	}
	void setType(String type) {
		this.type = type;
	}
	int getSize() {
		return size;
	}
	void setSize(int size) {
		this.size = size;
	}

	void Play() {
		System.out.print("Plays ");
	}
}//class MediaPlayer ends here
class AudioPlayer extends MediaPlayer{
//	constructor
	AudioPlayer() {
		super();
	}
	AudioPlayer(String type, int size) {
		super(type,size);
	}
	void Play() {
		super.Play();
		System.out.println("audio file");
	}
}//class AudioPlayer ends here
class VideoPlayer extends MediaPlayer{
//	constructor
	VideoPlayer() {
		super();
	}
	VideoPlayer(String type, int size) {
		super(type,size);
	}
	void Play() {
		super.Play();
		System.out.println("Video file");
	}
}// class VidoePlayer ends here
class TestMediaPlayer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MediaPlayer m1=new MediaPlayer();
		AudioPlayer a1=new AudioPlayer();
		VideoPlayer v1=new VideoPlayer();
		a1.Play();
		v1.Play();
	}
}//class TestMediaPlayer ends here
