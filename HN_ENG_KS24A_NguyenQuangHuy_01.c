#include<stdio.h>
int main(){
	int count1=0,count2=0;
	int max=0,max2=0;
	int arr[100];
	int o,m,num,answer,n,b,flag=-1;
	int start;
	int end;
	do{
	printf("MENU\n");
	printf("1.Nhap so phan tu va gia tri cho mang.\n");
	printf("2.in ra cac gia tri cua mang.\n");
	printf("3.dem so luong cac phan tu chan le.\n");
	printf("4.tim gia tri lon thu hai trong mang.\n");
	printf("5.them 1 phan tu vao dau mang.\n");
	printf("6.xoa 1 phan tu,\n");
	printf("7.sap xep theo thu tu giam dan(insertion sort).\n");
	printf("8.nhap va tim kiem phan tu.\n");
	printf("9.in ra cac so nguyen to trong mang da duoc binh phuong.\n");
	printf("10.sap xep theo thu tu giam dan(bubble sort).\n");
	printf("11.thoat.\n");
	printf("cau tra loi cua ban: ");
	scanf("%d",&answer);
	switch(answer){
		case 1:
			printf("nhap so phan tu trong mang: ");
			scanf("%d",&o);
			for(int i=0;i<o;i++){
				printf("nhap vao so thu %d cua mang: ",i+1);
				scanf("%d",&arr[i]);
			}
			break;
		case 2:
			for(int i=0;i<o;i++){
			printf("arr[%d]=%d ",i,arr[i]);
		}
			break;
		case 3:
			for(int i=0;i<o;i++){
				if(arr[i]%2==0){
					count2++;
				}else{
					count1++;
				}
			}
			if(count1==0){
				printf("khong co so le nao va co %d so chan.",count2);
			}else if(count2==0){
				printf("khong co so chan nao va co %d so le.",count1);
			}else{
				printf("co %d so le va %d so chan",count1,count2);
			}
			break;
		case 4:
			for(int i=0;i<o;i++){
				if(arr[i]>arr[i+1]){
					max=arr[i];
				}
			}
			for(int j=0;j<o;j++){
				if(arr[j]>arr[j+1] && arr[j]<max){
					max2=arr[j];
				}
			}
			printf("so lon thu 2 trong mang la %d.",max2);
			break;
		case 5:
			printf("gia tri phan tu ban muon them la: ");
			scanf("%d",&m);
			o++;
			for(int i=o+1;i>=0;i--){
				arr[i+1]=arr[i];
			}
			arr[0]=m;
			break;
		case 6:
			printf("nhap vi tri phan tu ban muon xoa: ");
			scanf("%d",&num);
			if(num>o||num<0){
				printf("vi tri phan tu khong ton tai.");
			}else{
				for(int i=num;i<o;i++){
					arr[i]=arr[i+1];
				}
				o--;
			}
			break;
		case 7:
			for(int i=1;i<o;i++){
				int key=arr[i];
				int j=i-1;
				while(j>=0 && key>arr[j]){
					arr[j+1]=arr[j];
					j--;
				}
				arr[j+1]=key;
			}
			break;
		case 8:
			printf("nhap vao phan tu ban muon tim kiem: ");
			scanf("%d",&n);
			start=0;
			end=o;
			while(start<=end){
				int mid=(start+end)/2;
				if(n>arr[mid]){
					end=mid-1;
					flag++;
				}else if(n<arr[mid]){
					start=mid++;
					flag++;
				}else{
					printf("phan tu %d nam o vi tri %d",n,mid);
				}
			}
			if(flag==-1){
				printf("khong co phan tu trong mang");
			}
			break;
		case 9:
			printf("/n");
			break;
		case 10:
			for(int i=0;i<o-1;i++){
				for(int j=0;j<o-1;j++){
					if(arr[j]<arr[j+1]){
						int temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			break;	
	}
	printf("\n-------------------------------------------\n");
	}while(answer!=11);
	
	return 0;
}
