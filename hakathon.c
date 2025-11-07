#include<stdio.h>
#include<math.h>
int main(){
	int n = 0,number,max,min,j,i,count = 0,valu,posi,choice,array[100];
	int flag = 0,temp1,temp2,sum = 0;
	do{
		printf("+--------------------------------------------------------MENU---------------------------------------------------------+\n");
		printf("|1.  Nhap so luong phan tu va gia tri tung phan tu trong mang                                                         |\n");
		printf("|2.  In ra cac gia tri phan tu trong mang                                                                             |\n");
		printf("|3.  Tim gia tri nho nhat va lon nhat trong mang                                                                      |\n");
		printf("|4.  In ra tong cua tat ca cac phan tu                                                                                |\n");
		printf("|5.  Them moi mot phan tu vao cuoi mang                                                                               |\n");
		printf("|6.  Xoa phan tu tai mot vi tri cu the                                                                                |\n");
		printf("|7.  Sap xep mang theo thu tu tang dan                                                                                |\n");
		printf("|8.  Tim kiem va hien thi vi tri cua mot phan tu                                                                      |\n");
		printf("|9.  In ra toan bo so nguyen to                                                                                       |\n");
		printf("|10. sap xep mang theo thu tu tang dan                                                                                |\n");
		printf("+---------------------------------------------------------------------------------------------------------------------+\n");
		printf("moi ban nhap lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				while(1){
					printf("moi ban nhap so luong phan tu cua mang: ");
					scanf("%d",&n);
				if(n <= 0 || n > 100){
					printf("loi moi ban nhap lai!!!");
					}
				break;
				}
				for(int i = 0; i < n; i++){
					printf("moi ban nhap gia tri cua tung phan tu array[%d] = ",i);
					scanf("%d",&array[i]);
				}
				printf("\n");
				break;
		case 2:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
			for(int i = 0; i < n; i++){
				printf("array[%d] = %d\n",i,array[i]);
			}
			printf("\n");
			break;
		case 3:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
			max = array[0];
			min = array[0];
			for(int i = 0; i < n; i++){
				if(array[i] > max){
					max = array[i];
				}
			}
			for(int i = 0; i < n; i++){
				if(array[i] < min){
					min = array[i];
				}
			}
			printf("so nho nhat trong mang la: %d",min);
			printf("so lon nhat trong mang la: %d",max);
			printf("\n");
			break;
		case 4:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
			for(int i = 0; i < n; i++){
				sum += array[i];
			}
			printf("tong cua cac phan tu: %d",sum);
			printf("\n");
			break;
		case 5:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
			printf("moi ban nhap so muon them vao cuoi mang: ");
			scanf("%d",&valu);
			array[n++] = valu;
			printf("\n");
			break;
		case 6:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
			printf("moi ban nhap vi tri muon xoa: ");
			scanf("%d",&posi);
			for(int i = posi; i < n; i++){
				array[i] = array[i+1];
			}
			n--;
			printf("\n");
			break;
		case 7:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
			for(int i = 0; i < n - 1;i++){
				for(int j = 0; j < n - 1 - i;j++){
					if(array[j] > array[j+1]){
						temp1 = array[j];
						array[j] = array[j+1];
						array[j+1] = temp1;
					}
				}
			}
			printf("\n");
			break;
		case 8:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
			printf("moi nhap so muon tim: ");
			scanf("%d",&number);
			for( i = 0; i < n; i++){
				if(array[i] == number){
					flag = 1;
					printf("so %d tai array[%d]\n",number,i);
				}
			}
			if(flag == 0){
				printf("khong tim thay!!!");
			}
			printf("\n");	
			break;
			case 9:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
    			for (int i = 0; i < n; i++) {
        			int found = 1;
        	if (array[i] < 2){
            	found = 0;
    		}else {
            	for (int j = 2; j <= sqrt(array[i]); j++) {
                if (array[i] % j == 0) {
                    found = 0;
                    break;
                }
            }
        }
        	if (found == 1){
        		count++;
            	printf("%d ", array[i]);
			}
		}			
			if(count == 0){
				printf("khong tim thay so nguyen to!!!");
			}
    		printf("\n");
    		break;
			case 10:
			if(n == 0){
				printf("moi ban nhap luong phan tu va gia tri tung phan tu trong mang truoc!!!\n");
				break;
			}
			for(int i = 0; i < n; i++){
				int minIndex = i;
				for(int j = i + 1; j < n; j++){
					if(array[minIndex] > array[j]){
						minIndex = j;
					}
				}
				temp2 = array[minIndex];
				array[minIndex] = array[i];
				array[i] = temp2;
			}
			printf("\n");
			break;
		}
	}while(1);
	return 0;
}

