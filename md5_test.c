 
#include "md5.h"  
  
int main(int argc, char *argv[])  
{  
    MD5_CTX md5;  

    int i;  
    //unsigned char encrypt[] ="12345678901234567890123456789012345678901234567890123456789012345678901234567890";
    //MD5(admin) = 21232f297a57a5a743894a0e4a801fc3  
    unsigned char encrypt[] = "admin";
    unsigned char decrypt_old[16];  
	unsigned char decrypt_new[16]; 
	// Method1:
	//MD5Init(&md5); 
    //MD5Update(&md5,encrypt,strlen((char *)encrypt));  
    //MD5Final(&md5,decrypt_old);   
	
	// Method2:
	CalcMD5(&md5, encrypt, strlen((char *)encrypt), decrypt_new);

    printf("Before execute MD5-16: %s\n", encrypt);  
    //printf("after execute MD5-16: ");
    //for(i=4;i<12;i++)  
    //{  
		// X��ʾ��ʮ��������ʽ���,02��ʾ������λ,ǰ�油0���;������λ,��Ӱ��.
        //printf("%02x",decrypt_old[i]);  //02xǰ��Ҫ���� % , 
    //}  
       
    printf("after execute MD5-32: ");
    //for(i=0;i<16;i++)  
    //{  
        //printf("%02x",decrypt_old[i]);  //02xǰ��Ҫ���� %  
    //}  
    //printf("\n");
	for(i=0;i<16;i++)  
    {  
        printf("%02x",decrypt_new[i]);  //02xǰ��Ҫ���� %  
    }  
    printf("\n");
    //getchar();  
  
    return 0;  
}  
