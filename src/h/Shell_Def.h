// the implementation to call elements like 
// matrix in matlab but not cause additional cost.
// a black magic powered by six!
// #define coor_1_1_ (coor[0])
// #define coor_2_1_ (coor[1])
// #define coor_3_1_ (coor[2])
// #define coor_4_1_ (coor[3])
// #define coor_1_2_ (coor[4])
// #define coor_2_2_ (coor[5])
// #define coor_3_2_ (coor[6])
// #define coor_4_2_ (coor[7])
// #define coor(i,j) (coor_##i##_##j##_)

// #define coor(i,j) (coor##[##(i)##-1]##[##(j)##-1])

#define GN_1_1_ (GN[0][0])
#define GN_1_2_ (GN[0][1])
#define GN_1_3_ (GN[0][2])
#define GN_1_4_ (GN[0][3])
#define GN_1_5_ (GN[0][4])
#define GN_1_6_ (GN[0][5])
#define GN_1_7_ (GN[0][6])
#define GN_1_8_ (GN[0][7])
#define GN_1_9_ (GN[0][8])
#define GN_2_1_ (GN[1][0])
#define GN_2_2_ (GN[1][1])
#define GN_2_3_ (GN[1][2])
#define GN_2_4_ (GN[1][3])
#define GN_2_5_ (GN[1][4])
#define GN_2_6_ (GN[1][5])
#define GN_2_7_ (GN[1][6])
#define GN_2_8_ (GN[1][7])
#define GN_2_9_ (GN[1][8])
#define GN(i,j) (GN_##i##_##j##_)

#define Jacobi_1_1_ (Jacobi[0][0])
#define Jacobi_1_2_ (Jacobi[0][1])
#define Jacobi_1_3_ (Jacobi[0][2])
#define Jacobi_2_1_ (Jacobi[1][0])
#define Jacobi_2_2_ (Jacobi[1][1])
#define Jacobi_2_3_ (Jacobi[1][2])
#define Jacobi_3_1_ (Jacobi[2][0])
#define Jacobi_3_2_ (Jacobi[2][1])
#define Jacobi_3_3_ (Jacobi[2][2])
#define Jacobi(i,j) (Jacobi_##i##_##j##_)

#define Jacobi_inv_1_1_ (Jacobi_inv[0][0])
#define Jacobi_inv_1_2_ (Jacobi_inv[0][1])
#define Jacobi_inv_1_3_ (Jacobi_inv[0][2])
#define Jacobi_inv_2_1_ (Jacobi_inv[1][0])
#define Jacobi_inv_2_2_ (Jacobi_inv[1][1])
#define Jacobi_inv_2_3_ (Jacobi_inv[1][2])
#define Jacobi_inv_3_1_ (Jacobi_inv[2][0])
#define Jacobi_inv_3_2_ (Jacobi_inv[2][1])
#define Jacobi_inv_3_3_ (Jacobi_inv[2][2])
#define Jacobi_inv(i,j) (Jacobi_inv_##i##_##j##_)

#define Bmat_1_1_ (Bmat[0])
#define Bmat_1_2_ (Bmat[1])
#define Bmat_1_3_ (Bmat[2])
#define Bmat_1_4_ (Bmat[3])
#define Bmat_1_5_ (Bmat[4])
#define Bmat_1_6_ (Bmat[5])
#define Bmat_1_7_ (Bmat[6])
#define Bmat_1_8_ (Bmat[7])
#define Bmat_1_9_ (Bmat[8])

#define Bmat_2_1_ (Bmat[9])
#define Bmat_2_2_ (Bmat[10])
#define Bmat_2_3_ (Bmat[11])
#define Bmat_2_4_ (Bmat[12])
#define Bmat_2_5_ (Bmat[13])
#define Bmat_2_6_ (Bmat[14])
#define Bmat_2_7_ (Bmat[15])
#define Bmat_2_8_ (Bmat[16])
#define Bmat_2_9_ (Bmat[17])

#define Bmat(i,j) (Bmat_##i##_##j##_)

#define NBmat_1_1_ (Bmat[0])
#define NBmat_1_2_ (0)
#define NBmat_1_3_ (Bmat[1])
#define NBmat_1_4_ (0)
#define NBmat_1_5_ (Bmat[2])
#define NBmat_1_6_ (0)
#define NBmat_1_7_ (Bmat[3])
#define NBmat_1_8_ (0)
#define NBmat_2_1_ (0)
#define NBmat_2_2_ (Bmat[4])
#define NBmat_2_3_ (0)
#define NBmat_2_4_ (Bmat[5])
#define NBmat_2_5_ (0)
#define NBmat_2_6_ (Bmat[6])
#define NBmat_2_7_ (0)
#define NBmat_2_8_ (Bmat[7])
#define NBmat_3_1_ (Bmat[4])
#define NBmat_3_2_ (Bmat[0])
#define NBmat_3_3_ (Bmat[5])
#define NBmat_3_4_ (Bmat[1])
#define NBmat_3_5_ (Bmat[6])
#define NBmat_3_6_ (Bmat[2])
#define NBmat_3_7_ (Bmat[7])
#define NBmat_3_8_ (Bmat[3])
#define NBmat(i,j) (NBmat_##i##_##j##_)


#define Cttmat_1_1_ (Cttmat[0])
#define Cttmat_1_2_ (Cttmat[1])
#define Cttmat_1_3_ (0)
#define Cttmat_2_1_ (Cttmat[1])
#define Cttmat_2_2_ (Cttmat[0])
#define Cttmat_2_3_ (0)
#define Cttmat_3_1_ (0)
#define Cttmat_3_2_ (0)
#define Cttmat_3_3_ (Cttmat[2])
#define Cttmat_4_4_ (Cttmat[3])
#define Cttmat_5_5_ (Cttmat[3])
#define Cttmat(i,j) (Cttmat_##i##_##j##_)

#define StiffMatrix_1_1_ (StiffMatrix[0])
#define StiffMatrix_2_2_ (StiffMatrix[1])
#define StiffMatrix_2_1_ (StiffMatrix[2])
#define StiffMatrix_3_3_ (StiffMatrix[6])
#define StiffMatrix_3_2_ (StiffMatrix[8])
#define StiffMatrix_3_1_ (StiffMatrix[9])
#define StiffMatrix_4_4_ (StiffMatrix[10])
#define StiffMatrix_4_3_ (StiffMatrix[11])
#define StiffMatrix_4_2_ (StiffMatrix[13])
#define StiffMatrix_4_1_ (StiffMatrix[14])
#define StiffMatrix_5_5_ (StiffMatrix[21])
#define StiffMatrix_5_4_ (StiffMatrix[23])
#define StiffMatrix_5_3_ (StiffMatrix[24])
#define StiffMatrix_5_2_ (StiffMatrix[26])
#define StiffMatrix_5_1_ (StiffMatrix[27])
#define StiffMatrix_6_6_ (StiffMatrix[28])
#define StiffMatrix_6_5_ (StiffMatrix[29])
#define StiffMatrix_6_4_ (StiffMatrix[31])
#define StiffMatrix_6_3_ (StiffMatrix[32])
#define StiffMatrix_6_2_ (StiffMatrix[34])
#define StiffMatrix_6_1_ (StiffMatrix[35])
#define StiffMatrix_7_7_ (StiffMatrix[45])
#define StiffMatrix_7_6_ (StiffMatrix[47])
#define StiffMatrix_7_5_ (StiffMatrix[48])
#define StiffMatrix_7_4_ (StiffMatrix[50])
#define StiffMatrix_7_3_ (StiffMatrix[51])
#define StiffMatrix_7_2_ (StiffMatrix[53])
#define StiffMatrix_7_1_ (StiffMatrix[54])
#define StiffMatrix_8_8_ (StiffMatrix[55])
#define StiffMatrix_8_7_ (StiffMatrix[56])
#define StiffMatrix_8_6_ (StiffMatrix[58])
#define StiffMatrix_8_5_ (StiffMatrix[59])
#define StiffMatrix_8_4_ (StiffMatrix[61])
#define StiffMatrix_8_3_ (StiffMatrix[62])
#define StiffMatrix_8_2_ (StiffMatrix[64])
#define StiffMatrix_8_1_ (StiffMatrix[65])
#define StiffMatrix(i,j) (StiffMatrix_##i##_##j##_)