#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

main()
{
   /* dir 디렉토리를 0755 권한으로 생성 */
   if(mkdir("dir", 0755) == -1) {
      perror("mkdir failed");
      exit(1);
   }
   /* dir 디렉토리를 삭제 */
   if(rmdir("dir") == -1) {
      perror("rmdir failed");
      exit(2);
   }
   exit(0);
}