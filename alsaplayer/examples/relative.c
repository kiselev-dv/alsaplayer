#include <alsaplayer/control.h>

int main (int argc, char *argv[])
{
	int pos;
	if (argc == 2) {
		pos = atoi(argv[1]);

		if (ap_set_position_relative (0, pos)) {
			printf("Seeked ahead %d seconds\n", pos);
		}
	}	
  return 0;
}
