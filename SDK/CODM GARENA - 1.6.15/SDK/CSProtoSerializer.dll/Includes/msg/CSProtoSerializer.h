#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSProtoSerializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProtoSerializer.dll", "msg", "CSProtoSerializer"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& knownTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Write(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x769638))(0, , );
	}
	template <typename T = uintptr_t> static T Read(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76998C))(0, , );
	}
	template <typename T = void> static T Write_1(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x769D1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76AD70))(0, , );
	}
	template <typename T = void> static T Write_2(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76C1DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_2(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76C6A8))(0, , );
	}
	template <typename T = void> static T Write_3(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76CC60))(0, , );
	}
	template <typename T = uintptr_t> static T Read_3(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76D334))(0, , );
	}
	template <typename T = void> static T Write_4(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76D8F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_4(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76DEB8))(0, , );
	}
	template <typename T = void> static T Write_5(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76E5CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_5(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76E950))(0, , );
	}
	template <typename T = void> static T Write_6(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76EDA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_6(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76F168))(0, , );
	}
	template <typename T = void> static T Write_7(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76F4F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_7(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76FC8C))(0, , );
	}
	template <typename T = void> static T Write_8(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x770478))(0, , );
	}
	template <typename T = uintptr_t> static T Read_8(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x771A90))(0, , );
	}
	template <typename T = void> static T Write_9(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77356C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_9(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7740E8))(0, , );
	}
	template <typename T = void> static T Write_10(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x773E08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_10(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x774B50))(0, , );
	}
	template <typename T = void> static T Write_11(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x774E30))(0, , );
	}
	template <typename T = uintptr_t> static T Read_11(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77599C))(0, , );
	}
	template <typename T = void> static T Write_12(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x776760))(0, , );
	}
	template <typename T = uintptr_t> static T Read_12(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x776EA4))(0, , );
	}
	template <typename T = void> static T Write_13(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7777C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_13(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7780D4))(0, , );
	}
	template <typename T = void> static T Write_14(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x778AF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_14(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x779214))(0, , );
	}
	template <typename T = void> static T Write_15(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x770F00))(0, , );
	}
	template <typename T = uintptr_t> static T Read_15(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7726EC))(0, , );
	}
	template <typename T = void> static T Write_16(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77994C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_16(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x779D34))(0, , );
	}
	template <typename T = void> static T Write_17(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77A198))(0, , );
	}
	template <typename T = uintptr_t> static T Read_17(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77ABB0))(0, , );
	}
	template <typename T = void> static T Write_18(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77B744))(0, , );
	}
	template <typename T = uintptr_t> static T Read_18(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77C27C))(0, , );
	}
	template <typename T = void> static T Write_19(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77BF68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_19(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77CC70))(0, , );
	}
	template <typename T = void> static T Write_20(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77D014))(0, , );
	}
	template <typename T = uintptr_t> static T Read_20(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77D378))(0, , );
	}
	template <typename T = void> static T Write_21(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77D71C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_21(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77DDEC))(0, , );
	}
	template <typename T = void> static T Write_22(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77E6A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_22(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77F488))(0, , );
	}
	template <typename T = void> static T Write_23(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7805FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_23(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x781924))(0, , );
	}
	template <typename T = void> static T Write_24(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x781644))(0, , );
	}
	template <typename T = uintptr_t> static T Read_24(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x782FB4))(0, , );
	}
	template <typename T = void> static T Write_25(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7832E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_25(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x783A0C))(0, , );
	}
	template <typename T = void> static T Write_26(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x784148))(0, , );
	}
	template <typename T = uintptr_t> static T Read_26(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x784430))(0, , );
	}
	template <typename T = void> static T Write_27(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x784720))(0, , );
	}
	template <typename T = uintptr_t> static T Read_27(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x784B00))(0, , );
	}
	template <typename T = void> static T Write_28(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x784FA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_28(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7853E4))(0, , );
	}
	template <typename T = void> static T Write_29(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x785838))(0, , );
	}
	template <typename T = uintptr_t> static T Read_29(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x785BC4))(0, , );
	}
	template <typename T = void> static T Write_30(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x786020))(0, , );
	}
	template <typename T = uintptr_t> static T Read_30(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x786B1C))(0, , );
	}
	template <typename T = void> static T Write_31(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x787728))(0, , );
	}
	template <typename T = uintptr_t> static T Read_31(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x787A08))(0, , );
	}
	template <typename T = void> static T Write_32(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x787CE8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_32(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x787FC8))(0, , );
	}
	template <typename T = void> static T Write_33(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7882F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_33(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7885D4))(0, , );
	}
	template <typename T = void> static T Write_34(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7888B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_34(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x788A94))(0, , );
	}
	template <typename T = void> static T Write_35(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x788C14))(0, , );
	}
	template <typename T = uintptr_t> static T Read_35(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78970C))(0, , );
	}
	template <typename T = void> static T Write_36(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78A384))(0, , );
	}
	template <typename T = uintptr_t> static T Read_36(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78A66C))(0, , );
	}
	template <typename T = void> static T Write_37(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78A954))(0, , );
	}
	template <typename T = uintptr_t> static T Read_37(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78ADB0))(0, , );
	}
	template <typename T = void> static T Write_38(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78B2FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_38(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78B7BC))(0, , );
	}
	template <typename T = void> static T Write_39(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78BCCC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_39(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78D28C))(0, , );
	}
	template <typename T = void> static T Write_40(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78EF84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_40(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78F364))(0, , );
	}
	template <typename T = void> static T Write_41(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78F804))(0, , );
	}
	template <typename T = uintptr_t> static T Read_41(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78FC48))(0, , );
	}
	template <typename T = void> static T Write_42(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7900A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_42(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x790490))(0, , );
	}
	template <typename T = void> static T Write_43(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x790950))(0, , );
	}
	template <typename T = uintptr_t> static T Read_43(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x790C30))(0, , );
	}
	template <typename T = void> static T Write_44(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x783724))(0, , );
	}
	template <typename T = uintptr_t> static T Read_44(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x783E58))(0, , );
	}
	template <typename T = void> static T Write_45(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x789150))(0, , );
	}
	template <typename T = uintptr_t> static T Read_45(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x789CDC))(0, , );
	}
	template <typename T = void> static T Write_46(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x790F10))(0, , );
	}
	template <typename T = uintptr_t> static T Read_46(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79164C))(0, , );
	}
	template <typename T = void> static T Write_47(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x791F60))(0, , );
	}
	template <typename T = uintptr_t> static T Read_47(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7922F4))(0, , );
	}
	template <typename T = void> static T Write_48(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x792730))(0, , );
	}
	template <typename T = uintptr_t> static T Read_48(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x792A8C))(0, , );
	}
	template <typename T = void> static T Write_49(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x792E1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_49(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x793130))(0, , );
	}
	template <typename T = void> static T Write_50(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7934D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_50(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x793898))(0, , );
	}
	template <typename T = void> static T Write_51(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x793C28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_51(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x793F8C))(0, , );
	}
	template <typename T = void> static T Write_52(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x794330))(0, , );
	}
	template <typename T = uintptr_t> static T Read_52(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x795E84))(0, , );
	}
	template <typename T = void> static T Write_53(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7973D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_53(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7978B8))(0, , );
	}
	template <typename T = void> static T Write_54(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x797F24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_54(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x798794))(0, , );
	}
	template <typename T = void> static T Write_55(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7992BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_55(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7996F0))(0, , );
	}
	template <typename T = void> static T Write_56(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x799B3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_56(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79C824))(0, , );
	}
	template <typename T = void> static T Write_57(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79FF64))(0, , );
	}
	template <typename T = uintptr_t> static T Read_57(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A4DDC))(0, , );
	}
	template <typename T = void> static T Write_58(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AA408))(0, , );
	}
	template <typename T = uintptr_t> static T Read_58(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AA7E0))(0, , );
	}
	template <typename T = void> static T Write_59(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A3704))(0, , );
	}
	template <typename T = uintptr_t> static T Read_59(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A8BC4))(0, , );
	}
	template <typename T = void> static T Write_60(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77F224))(0, , );
	}
	template <typename T = uintptr_t> static T Read_60(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7803D0))(0, , );
	}
	template <typename T = void> static T Write_61(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AACC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_61(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AB008))(0, , );
	}
	template <typename T = void> static T Write_62(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AB45C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_62(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AC244))(0, , );
	}
	template <typename T = void> static T Write_63(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AD2FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_63(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AD6BC))(0, , );
	}
	template <typename T = void> static T Write_64(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7ADB10))(0, , );
	}
	template <typename T = uintptr_t> static T Read_64(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7ADF50))(0, , );
	}
	template <typename T = void> static T Write_65(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AE39C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_65(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AE67C))(0, , );
	}
	template <typename T = void> static T Write_66(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AE95C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_66(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AEFC8))(0, , );
	}
	template <typename T = void> static T Write_67(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AF79C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_67(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AFC5C))(0, , );
	}
	template <typename T = void> static T Write_68(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B016C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_68(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B1618))(0, , );
	}
	template <typename T = void> static T Write_69(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B31B0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_69(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B38C4))(0, , );
	}
	template <typename T = void> static T Write_70(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B3FF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_70(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B434C))(0, , );
	}
	template <typename T = void> static T Write_71(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B46DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_71(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B4D78))(0, , );
	}
	template <typename T = void> static T Write_72(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B55E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_72(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B592C))(0, , );
	}
	template <typename T = void> static T Write_73(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B5CBC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_73(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B6094))(0, , );
	}
	template <typename T = void> static T Write_74(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B64E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_74(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B71F8))(0, , );
	}
	template <typename T = void> static T Write_75(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A4AEC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_75(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AA114))(0, , );
	}
	template <typename T = void> static T Write_76(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B8890))(0, , );
	}
	template <typename T = uintptr_t> static T Read_76(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B91EC))(0, , );
	}
	template <typename T = void> static T Write_77(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B99DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_77(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B9CBC))(0, , );
	}
	template <typename T = void> static T Write_78(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B9F9C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_78(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BA564))(0, , );
	}
	template <typename T = void> static T Write_79(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BAC74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_79(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BAF54))(0, , );
	}
	template <typename T = void> static T Write_80(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BB234))(0, , );
	}
	template <typename T = uintptr_t> static T Read_80(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BBCAC))(0, , );
	}
	template <typename T = void> static T Write_81(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BCA90))(0, , );
	}
	template <typename T = uintptr_t> static T Read_81(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BEA8C))(0, , );
	}
	template <typename T = void> static T Write_82(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C11F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_82(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C2884))(0, , );
	}
	template <typename T = void> static T Write_83(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C4530))(0, , );
	}
	template <typename T = uintptr_t> static T Read_83(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C6248))(0, , );
	}
	template <typename T = void> static T Write_84(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C8B44))(0, , );
	}
	template <typename T = uintptr_t> static T Read_84(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C9EA4))(0, , );
	}
	template <typename T = void> static T Write_85(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CBA08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_85(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CC038))(0, , );
	}
	template <typename T = void> static T Write_86(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A2CC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_86(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A8168))(0, , );
	}
	template <typename T = void> static T Write_87(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CC7F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_87(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CCEA0))(0, , );
	}
	template <typename T = void> static T Write_88(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CD798))(0, , );
	}
	template <typename T = uintptr_t> static T Read_88(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CDF2C))(0, , );
	}
	template <typename T = void> static T Write_89(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CE99C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_89(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CEE68))(0, , );
	}
	template <typename T = void> static T Write_90(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CF420))(0, , );
	}
	template <typename T = uintptr_t> static T Read_90(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CF8EC))(0, , );
	}
	template <typename T = void> static T Write_91(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7CFEA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_91(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D02F0))(0, , );
	}
	template <typename T = void> static T Write_92(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D0784))(0, , );
	}
	template <typename T = uintptr_t> static T Read_92(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D14CC))(0, , );
	}
	template <typename T = void> static T Write_93(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D0DA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_93(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D1B10))(0, , );
	}
	template <typename T = void> static T Write_94(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D2248))(0, , );
	}
	template <typename T = uintptr_t> static T Read_94(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D267C))(0, , );
	}
	template <typename T = void> static T Write_95(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D1088))(0, , );
	}
	template <typename T = uintptr_t> static T Read_95(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D1DF0))(0, , );
	}
	template <typename T = void> static T Write_96(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D2B80))(0, , );
	}
	template <typename T = uintptr_t> static T Read_96(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D3908))(0, , );
	}
	template <typename T = void> static T Write_97(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D4B6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_97(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D4F34))(0, , );
	}
	template <typename T = void> static T Write_98(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D52B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_98(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D9650))(0, , );
	}
	template <typename T = void> static T Write_99(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7DF1C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_99(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7DF5A8))(0, , );
	}
	template <typename T = void> static T Write_100(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7DFA48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_100(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7DFD38))(0, , );
	}
	template <typename T = void> static T Write_101(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E002C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_101(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E0568))(0, , );
	}
	template <typename T = void> static T Write_102(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E0B14))(0, , );
	}
	template <typename T = uintptr_t> static T Read_102(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E11D0))(0, , );
	}
	template <typename T = void> static T Write_103(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E1B3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_103(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E2278))(0, , );
	}
	template <typename T = void> static T Write_104(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E2DA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_104(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E3164))(0, , );
	}
	template <typename T = void> static T Write_105(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E34F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_105(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E37D4))(0, , );
	}
	template <typename T = void> static T Write_106(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E3AB8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_106(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E4B98))(0, , );
	}
	template <typename T = void> static T Write_107(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E62AC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_107(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E6510))(0, , );
	}
	template <typename T = void> static T Write_108(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E67F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_108(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E6AD0))(0, , );
	}
	template <typename T = void> static T Write_109(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E6DB0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_109(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E7834))(0, , );
	}
	template <typename T = void> static T Write_110(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E8718))(0, , );
	}
	template <typename T = uintptr_t> static T Read_110(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E89F8))(0, , );
	}
	template <typename T = void> static T Write_111(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E8CD8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_111(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E8FB8))(0, , );
	}
	template <typename T = void> static T Write_112(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E9298))(0, , );
	}
	template <typename T = uintptr_t> static T Read_112(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E9580))(0, , );
	}
	template <typename T = void> static T Write_113(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E9870))(0, , );
	}
	template <typename T = uintptr_t> static T Read_113(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7E9C48))(0, , );
	}
	template <typename T = void> static T Write_114(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EA168))(0, , );
	}
	template <typename T = uintptr_t> static T Read_114(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EA450))(0, , );
	}
	template <typename T = void> static T Write_115(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EA740))(0, , );
	}
	template <typename T = uintptr_t> static T Read_115(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EAA90))(0, , );
	}
	template <typename T = void> static T Write_116(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EAE34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_116(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EB0A0))(0, , );
	}
	template <typename T = void> static T Write_117(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EB2DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_117(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EB540))(0, , );
	}
	template <typename T = void> static T Write_118(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EB76C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_118(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EB94C))(0, , );
	}
	template <typename T = void> static T Write_119(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EBACC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_119(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7ED694))(0, , );
	}
	template <typename T = void> static T Write_120(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EF768))(0, , );
	}
	template <typename T = uintptr_t> static T Read_120(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EFA50))(0, , );
	}
	template <typename T = void> static T Write_121(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EFD40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_121(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F0120))(0, , );
	}
	template <typename T = void> static T Write_122(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F05C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_122(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F0C94))(0, , );
	}
	template <typename T = void> static T Write_123(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F146C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_123(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F1844))(0, , );
	}
	template <typename T = void> static T Write_124(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F1C98))(0, , );
	}
	template <typename T = uintptr_t> static T Read_124(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F1FF4))(0, , );
	}
	template <typename T = void> static T Write_125(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F2418))(0, , );
	}
	template <typename T = uintptr_t> static T Read_125(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F26F8))(0, , );
	}
	template <typename T = void> static T Write_126(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F29D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_126(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F2CB8))(0, , );
	}
	template <typename T = void> static T Write_127(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F2F98))(0, , );
	}
	template <typename T = uintptr_t> static T Read_127(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F3204))(0, , );
	}
	template <typename T = void> static T Write_128(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F3440))(0, , );
	}
	template <typename T = uintptr_t> static T Read_128(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F3D38))(0, , );
	}
	template <typename T = void> static T Write_129(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F4754))(0, , );
	}
	template <typename T = uintptr_t> static T Read_129(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F49C0))(0, , );
	}
	template <typename T = void> static T Write_130(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F4BFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_130(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F4FBC))(0, , );
	}
	template <typename T = void> static T Write_131(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F5410))(0, , );
	}
	template <typename T = uintptr_t> static T Read_131(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F57EC))(0, , );
	}
	template <typename T = void> static T Write_132(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F5C48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_132(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F6538))(0, , );
	}
	template <typename T = void> static T Write_133(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F6E3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_133(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F8298))(0, , );
	}
	template <typename T = void> static T Write_134(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F95E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_134(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F9AAC))(0, , );
	}
	template <typename T = void> static T Write_135(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FA140))(0, , );
	}
	template <typename T = uintptr_t> static T Read_135(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FA3A4))(0, , );
	}
	template <typename T = void> static T Write_136(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FA5D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_136(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FA7B0))(0, , );
	}
	template <typename T = void> static T Write_137(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FA930))(0, , );
	}
	template <typename T = uintptr_t> static T Read_137(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FAB94))(0, , );
	}
	template <typename T = void> static T Write_138(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FADC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_138(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FB198))(0, , );
	}
	template <typename T = void> static T Write_139(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FB5EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_139(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FB8DC))(0, , );
	}
	template <typename T = void> static T Write_140(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FBBBC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_140(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FBF40))(0, , );
	}
	template <typename T = void> static T Write_141(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FC374))(0, , );
	}
	template <typename T = uintptr_t> static T Read_141(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FCA98))(0, , );
	}
	template <typename T = void> static T Write_142(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FD474))(0, , );
	}
	template <typename T = uintptr_t> static T Read_142(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FD654))(0, , );
	}
	template <typename T = void> static T Write_143(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FD7D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_143(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FDDF0))(0, , );
	}
	template <typename T = void> static T Write_144(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FE470))(0, , );
	}
	template <typename T = uintptr_t> static T Read_144(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FE760))(0, , );
	}
	template <typename T = void> static T Write_145(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FEA54))(0, , );
	}
	template <typename T = uintptr_t> static T Read_145(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FEDC0))(0, , );
	}
	template <typename T = void> static T Write_146(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FF168))(0, , );
	}
	template <typename T = uintptr_t> static T Read_146(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FF3CC))(0, , );
	}
	template <typename T = void> static T Write_147(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FF5F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_147(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FF85C))(0, , );
	}
	template <typename T = void> static T Write_148(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FFA88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_148(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FFD48))(0, , );
	}
	template <typename T = void> static T Write_149(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80002C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_149(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x800290))(0, , );
	}
	template <typename T = void> static T Write_150(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8004BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_150(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x800728))(0, , );
	}
	template <typename T = void> static T Write_151(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x800964))(0, , );
	}
	template <typename T = uintptr_t> static T Read_151(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x800CA0))(0, , );
	}
	template <typename T = void> static T Write_152(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x801040))(0, , );
	}
	template <typename T = uintptr_t> static T Read_152(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x801220))(0, , );
	}
	template <typename T = void> static T Write_153(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8013A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_153(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x807748))(0, , );
	}
	template <typename T = void> static T Write_154(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80DFE0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_154(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80E2A0))(0, , );
	}
	template <typename T = void> static T Write_155(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80E584))(0, , );
	}
	template <typename T = uintptr_t> static T Read_155(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80E7E8))(0, , );
	}
	template <typename T = void> static T Write_156(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80EA14))(0, , );
	}
	template <typename T = uintptr_t> static T Read_156(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80EECC))(0, , );
	}
	template <typename T = void> static T Write_157(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80F3D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_157(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80F5B0))(0, , );
	}
	template <typename T = void> static T Write_158(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80F730))(0, , );
	}
	template <typename T = uintptr_t> static T Read_158(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80F994))(0, , );
	}
	template <typename T = void> static T Write_159(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x80FBC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_159(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8111B8))(0, , );
	}
	template <typename T = void> static T Write_160(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x812890))(0, , );
	}
	template <typename T = uintptr_t> static T Read_160(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x812C58))(0, , );
	}
	template <typename T = void> static T Write_161(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x812FDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_161(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8136A4))(0, , );
	}
	template <typename T = void> static T Write_162(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8140C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_162(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x814324))(0, , );
	}
	template <typename T = void> static T Write_163(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x814550))(0, , );
	}
	template <typename T = uintptr_t> static T Read_163(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x814828))(0, , );
	}
	template <typename T = void> static T Write_164(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x814B08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_164(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x814D6C))(0, , );
	}
	template <typename T = void> static T Write_165(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x814F98))(0, , );
	}
	template <typename T = uintptr_t> static T Read_165(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8152F4))(0, , );
	}
	template <typename T = void> static T Write_166(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x815684))(0, , );
	}
	template <typename T = uintptr_t> static T Read_166(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8159C0))(0, , );
	}
	template <typename T = void> static T Write_167(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x815DA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_167(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x816938))(0, , );
	}
	template <typename T = void> static T Write_168(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8175C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_168(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x817824))(0, , );
	}
	template <typename T = void> static T Write_169(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x817A50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_169(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x817DAC))(0, , );
	}
	template <typename T = void> static T Write_170(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81813C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_170(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81858C))(0, , );
	}
	template <typename T = void> static T Write_171(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x818B24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_171(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x818D88))(0, , );
	}
	template <typename T = void> static T Write_172(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x818FB4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_172(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x819218))(0, , );
	}
	template <typename T = void> static T Write_173(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x819444))(0, , );
	}
	template <typename T = uintptr_t> static T Read_173(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8196A8))(0, , );
	}
	template <typename T = void> static T Write_174(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8198D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_174(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x819FF4))(0, , );
	}
	template <typename T = void> static T Write_175(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81A714))(0, , );
	}
	template <typename T = uintptr_t> static T Read_175(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81A978))(0, , );
	}
	template <typename T = void> static T Write_176(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81AC58))(0, , );
	}
	template <typename T = uintptr_t> static T Read_176(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81AEBC))(0, , );
	}
	template <typename T = void> static T Write_177(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81B0E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_177(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81C89C))(0, , );
	}
	template <typename T = void> static T Write_178(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81EC74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_178(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81EF5C))(0, , );
	}
	template <typename T = void> static T Write_179(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81F244))(0, , );
	}
	template <typename T = uintptr_t> static T Read_179(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81F5A0))(0, , );
	}
	template <typename T = void> static T Write_180(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81F930))(0, , );
	}
	template <typename T = uintptr_t> static T Read_180(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x820214))(0, , );
	}
	template <typename T = void> static T Write_181(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x820C88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_181(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x822814))(0, , );
	}
	template <typename T = void> static T Write_182(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x824D20))(0, , );
	}
	template <typename T = uintptr_t> static T Read_182(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8250E4))(0, , );
	}
	template <typename T = void> static T Write_183(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x825474))(0, , );
	}
	template <typename T = uintptr_t> static T Read_183(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82575C))(0, , );
	}
	template <typename T = void> static T Write_184(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x825A4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_184(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x825DB0))(0, , );
	}
	template <typename T = void> static T Write_185(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x826154))(0, , );
	}
	template <typename T = uintptr_t> static T Read_185(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x826334))(0, , );
	}
	template <typename T = void> static T Write_186(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8264B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_186(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8268F4))(0, , );
	}
	template <typename T = void> static T Write_187(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x826D40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_187(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x827ADC))(0, , );
	}
	template <typename T = void> static T Write_188(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8280A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_188(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x828A70))(0, , );
	}
	template <typename T = void> static T Write_189(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x829644))(0, , );
	}
	template <typename T = uintptr_t> static T Read_189(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x829824))(0, , );
	}
	template <typename T = void> static T Write_190(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8299A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_190(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82CE8C))(0, , );
	}
	template <typename T = void> static T Write_191(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x830780))(0, , );
	}
	template <typename T = uintptr_t> static T Read_191(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8309E4))(0, , );
	}
	template <typename T = void> static T Write_192(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x830C5C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_192(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8312E8))(0, , );
	}
	template <typename T = void> static T Write_193(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x831AD8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_193(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x831CB8))(0, , );
	}
	template <typename T = void> static T Write_194(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x831E38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_194(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x832278))(0, , );
	}
	template <typename T = void> static T Write_195(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8326C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_195(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x832928))(0, , );
	}
	template <typename T = void> static T Write_196(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x832B54))(0, , );
	}
	template <typename T = uintptr_t> static T Read_196(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x833168))(0, , );
	}
	template <typename T = void> static T Write_197(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x833798))(0, , );
	}
	template <typename T = uintptr_t> static T Read_197(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x833978))(0, , );
	}
	template <typename T = void> static T Write_198(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x833AF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_198(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x834EDC))(0, , );
	}
	template <typename T = void> static T Write_199(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x836754))(0, , );
	}
	template <typename T = uintptr_t> static T Read_199(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x836934))(0, , );
	}
	template <typename T = void> static T Write_200(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x836AB4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_200(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83734C))(0, , );
	}
	template <typename T = void> static T Write_201(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x837CAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_201(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x837F18))(0, , );
	}
	template <typename T = void> static T Write_202(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x838154))(0, , );
	}
	template <typename T = uintptr_t> static T Read_202(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8383C0))(0, , );
	}
	template <typename T = void> static T Write_203(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8385FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_203(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x838B3C))(0, , );
	}
	template <typename T = void> static T Write_204(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83910C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_204(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x839378))(0, , );
	}
	template <typename T = void> static T Write_205(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8395B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_205(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x839918))(0, , );
	}
	template <typename T = void> static T Write_206(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x839CBC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_206(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x839F8C))(0, , );
	}
	template <typename T = void> static T Write_207(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83A1AC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_207(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83A38C))(0, , );
	}
	template <typename T = void> static T Write_208(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83A50C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_208(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83A94C))(0, , );
	}
	template <typename T = void> static T Write_209(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83AD98))(0, , );
	}
	template <typename T = uintptr_t> static T Read_209(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83B15C))(0, , );
	}
	template <typename T = void> static T Write_210(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83B4EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_210(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83B750))(0, , );
	}
	template <typename T = void> static T Write_211(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83B97C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_211(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83BB5C))(0, , );
	}
	template <typename T = void> static T Write_212(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83BCDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_212(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83C838))(0, , );
	}
	template <typename T = void> static T Write_213(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83D59C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_213(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83E34C))(0, , );
	}
	template <typename T = void> static T Write_214(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83F4DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_214(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83FE74))(0, , );
	}
	template <typename T = void> static T Write_215(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x840934))(0, , );
	}
	template <typename T = uintptr_t> static T Read_215(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x840D74))(0, , );
	}
	template <typename T = void> static T Write_216(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8411C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_216(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8413A0))(0, , );
	}
	template <typename T = void> static T Write_217(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x841520))(0, , );
	}
	template <typename T = uintptr_t> static T Read_217(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8418C4))(0, , );
	}
	template <typename T = void> static T Write_218(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x841D14))(0, , );
	}
	template <typename T = uintptr_t> static T Read_218(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8421D0))(0, , );
	}
	template <typename T = void> static T Write_219(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8426F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_219(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8429C4))(0, , );
	}
	template <typename T = void> static T Write_220(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x842CA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_220(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x842F74))(0, , );
	}
	template <typename T = void> static T Write_221(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x843254))(0, , );
	}
	template <typename T = uintptr_t> static T Read_221(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x843D8C))(0, , );
	}
	template <typename T = void> static T Write_222(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x844B20))(0, , );
	}
	template <typename T = uintptr_t> static T Read_222(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x844E5C))(0, , );
	}
	template <typename T = void> static T Write_223(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8451F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_223(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x845554))(0, , );
	}
	template <typename T = void> static T Write_224(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x845974))(0, , );
	}
	template <typename T = uintptr_t> static T Read_224(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x845DC8))(0, , );
	}
	template <typename T = void> static T Write_225(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x846350))(0, , );
	}
	template <typename T = uintptr_t> static T Read_225(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x846630))(0, , );
	}
	template <typename T = void> static T Write_226(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x846910))(0, , );
	}
	template <typename T = uintptr_t> static T Read_226(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x846D88))(0, , );
	}
	template <typename T = void> static T Write_227(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x847380))(0, , );
	}
	template <typename T = uintptr_t> static T Read_227(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8475A8))(0, , );
	}
	template <typename T = void> static T Write_228(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8477D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_228(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8479FC))(0, , );
	}
	template <typename T = void> static T Write_229(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x847C28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_229(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x848C8C))(0, , );
	}
	template <typename T = void> static T Write_230(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x848234))(0, , );
	}
	template <typename T = uintptr_t> static T Read_230(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8493A8))(0, , );
	}
	template <typename T = void> static T Write_231(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84A538))(0, , );
	}
	template <typename T = uintptr_t> static T Read_231(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84A718))(0, , );
	}
	template <typename T = void> static T Write_232(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84A898))(0, , );
	}
	template <typename T = uintptr_t> static T Read_232(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84ACD8))(0, , );
	}
	template <typename T = void> static T Write_233(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84B124))(0, , );
	}
	template <typename T = uintptr_t> static T Read_233(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84B304))(0, , );
	}
	template <typename T = void> static T Write_234(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84B484))(0, , );
	}
	template <typename T = uintptr_t> static T Read_234(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84BA10))(0, , );
	}
	template <typename T = void> static T Write_235(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84C080))(0, , );
	}
	template <typename T = uintptr_t> static T Read_235(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84C4DC))(0, , );
	}
	template <typename T = void> static T Write_236(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84C9EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_236(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84CFFC))(0, , );
	}
	template <typename T = void> static T Write_237(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84D720))(0, , );
	}
	template <typename T = uintptr_t> static T Read_237(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84DA10))(0, , );
	}
	template <typename T = void> static T Write_238(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84DD04))(0, , );
	}
	template <typename T = uintptr_t> static T Read_238(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84E148))(0, , );
	}
	template <typename T = void> static T Write_239(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84E65C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_239(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84EDD0))(0, , );
	}
	template <typename T = void> static T Write_240(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84F2B0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_240(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84FCCC))(0, , );
	}
	template <typename T = void> static T Write_241(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x850514))(0, , );
	}
	template <typename T = uintptr_t> static T Read_241(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x850870))(0, , );
	}
	template <typename T = void> static T Write_242(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x850C00))(0, , );
	}
	template <typename T = uintptr_t> static T Read_242(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8510BC))(0, , );
	}
	template <typename T = void> static T Write_243(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8515C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_243(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8517A0))(0, , );
	}
	template <typename T = void> static T Write_244(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x851920))(0, , );
	}
	template <typename T = uintptr_t> static T Read_244(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85489C))(0, , );
	}
	template <typename T = void> static T Write_245(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85848C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_245(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x858B54))(0, , );
	}
	template <typename T = void> static T Write_246(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x858F84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_246(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x859804))(0, , );
	}
	template <typename T = void> static T Write_247(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x859E50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_247(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85A2B8))(0, , );
	}
	template <typename T = void> static T Write_248(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85A7B0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_248(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85ADFC))(0, , );
	}
	template <typename T = void> static T Write_249(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85B0C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_249(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85B81C))(0, , );
	}
	template <typename T = void> static T Write_250(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85BCFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_250(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85BFBC))(0, , );
	}
	template <typename T = void> static T Write_251(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85C2A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_251(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85C480))(0, , );
	}
	template <typename T = void> static T Write_252(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85C600))(0, , );
	}
	template <typename T = uintptr_t> static T Read_252(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85CC20))(0, , );
	}
	template <typename T = void> static T Write_253(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85D268))(0, , );
	}
	template <typename T = uintptr_t> static T Read_253(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85D898))(0, , );
	}
	template <typename T = void> static T Write_254(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85E054))(0, , );
	}
	template <typename T = uintptr_t> static T Read_254(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85E528))(0, , );
	}
	template <typename T = void> static T Write_255(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85EAE8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_255(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85F178))(0, , );
	}
	template <typename T = void> static T Write_256(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85FACC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_256(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x85FE28))(0, , );
	}
	template <typename T = void> static T Write_257(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x860248))(0, , );
	}
	template <typename T = uintptr_t> static T Read_257(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8608E0))(0, , );
	}
	template <typename T = void> static T Write_258(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8610EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_258(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8612CC))(0, , );
	}
	template <typename T = void> static T Write_259(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86144C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_259(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x861AF8))(0, , );
	}
	template <typename T = void> static T Write_260(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x862364))(0, , );
	}
	template <typename T = uintptr_t> static T Read_260(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86258C))(0, , );
	}
	template <typename T = void> static T Write_261(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8627B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_261(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x862F18))(0, , );
	}
	template <typename T = void> static T Write_262(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x863704))(0, , );
	}
	template <typename T = uintptr_t> static T Read_262(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x863970))(0, , );
	}
	template <typename T = void> static T Write_263(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x863BAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_263(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x863E84))(0, , );
	}
	template <typename T = void> static T Write_264(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86416C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_264(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8643CC))(0, , );
	}
	template <typename T = void> static T Write_265(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8645F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_265(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x864B1C))(0, , );
	}
	template <typename T = void> static T Write_266(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8650E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_266(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8655B4))(0, , );
	}
	template <typename T = void> static T Write_267(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x865B6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_267(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x865DD0))(0, , );
	}
	template <typename T = void> static T Write_268(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x865FFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_268(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x866430))(0, , );
	}
	template <typename T = void> static T Write_269(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x866934))(0, , );
	}
	template <typename T = uintptr_t> static T Read_269(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x866C70))(0, , );
	}
	template <typename T = void> static T Write_270(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x867010))(0, , );
	}
	template <typename T = uintptr_t> static T Read_270(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86734C))(0, , );
	}
	template <typename T = void> static T Write_271(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8676EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_271(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x869638))(0, , );
	}
	template <typename T = void> static T Write_272(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86BBB4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_272(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86C5F4))(0, , );
	}
	template <typename T = void> static T Write_273(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86D224))(0, , );
	}
	template <typename T = uintptr_t> static T Read_273(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86D488))(0, , );
	}
	template <typename T = void> static T Write_274(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86D6B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_274(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86DF8C))(0, , );
	}
	template <typename T = void> static T Write_275(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86E8C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_275(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86EAA8))(0, , );
	}
	template <typename T = void> static T Write_276(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86EC28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_276(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86F068))(0, , );
	}
	template <typename T = void> static T Write_277(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86F4B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_277(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86F718))(0, , );
	}
	template <typename T = void> static T Write_278(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86F944))(0, , );
	}
	template <typename T = uintptr_t> static T Read_278(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86FBA8))(0, , );
	}
	template <typename T = void> static T Write_279(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86FDD4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_279(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x870388))(0, , );
	}
	template <typename T = void> static T Write_280(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8709F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_280(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x870F74))(0, , );
	}
	template <typename T = void> static T Write_281(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x871670))(0, , );
	}
	template <typename T = uintptr_t> static T Read_281(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x871A28))(0, , );
	}
	template <typename T = void> static T Write_282(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x871E70))(0, , );
	}
	template <typename T = uintptr_t> static T Read_282(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x872228))(0, , );
	}
	template <typename T = void> static T Write_283(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x872670))(0, , );
	}
	template <typename T = uintptr_t> static T Read_283(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x872C7C))(0, , );
	}
	template <typename T = void> static T Write_284(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x873384))(0, , );
	}
	template <typename T = uintptr_t> static T Read_284(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x874300))(0, , );
	}
	template <typename T = void> static T Write_285(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86DAF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_285(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86E3D8))(0, , );
	}
	template <typename T = void> static T Write_286(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8755C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_286(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x875824))(0, , );
	}
	template <typename T = void> static T Write_287(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x875A50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_287(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x876248))(0, , );
	}
	template <typename T = void> static T Write_288(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x876AE8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_288(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x876DC8))(0, , );
	}
	template <typename T = void> static T Write_289(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8770A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_289(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8775E0))(0, , );
	}
	template <typename T = void> static T Write_290(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x877BA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_290(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8785F0))(0, , );
	}
	template <typename T = void> static T Write_291(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8792E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_291(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8799E0))(0, , );
	}
	template <typename T = void> static T Write_292(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87A30C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_292(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87A664))(0, , );
	}
	template <typename T = void> static T Write_293(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87A9F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_293(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87B550))(0, , );
	}
	template <typename T = void> static T Write_294(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x875F0C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_294(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87674C))(0, , );
	}
	template <typename T = void> static T Write_295(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86C064))(0, , );
	}
	template <typename T = uintptr_t> static T Read_295(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86CBB4))(0, , );
	}
	template <typename T = void> static T Write_296(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87C2F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_296(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87C700))(0, , );
	}
	template <typename T = void> static T Write_297(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87CBF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_297(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87D1FC))(0, , );
	}
	template <typename T = void> static T Write_298(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87D920))(0, , );
	}
	template <typename T = uintptr_t> static T Read_298(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87DD74))(0, , );
	}
	template <typename T = void> static T Write_299(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87E27C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_299(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87E4E0))(0, , );
	}
	template <typename T = void> static T Write_300(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87E70C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_300(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87E8EC))(0, , );
	}
	template <typename T = void> static T Write_301(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87EA6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_301(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87EFC0))(0, , );
	}
	template <typename T = void> static T Write_302(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87F664))(0, , );
	}
	template <typename T = uintptr_t> static T Read_302(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87F944))(0, , );
	}
	template <typename T = void> static T Write_303(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87FC74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_303(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87FE54))(0, , );
	}
	template <typename T = void> static T Write_304(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87FFD4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_304(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x880414))(0, , );
	}
	template <typename T = void> static T Write_305(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x880860))(0, , );
	}
	template <typename T = uintptr_t> static T Read_305(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x880C28))(0, , );
	}
	template <typename T = void> static T Write_306(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x881088))(0, , );
	}
	template <typename T = uintptr_t> static T Read_306(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x881634))(0, , );
	}
	template <typename T = void> static T Write_307(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x881DA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_307(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8820FC))(0, , );
	}
	template <typename T = void> static T Write_308(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8824D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_308(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x882798))(0, , );
	}
	template <typename T = void> static T Write_309(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x882A7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_309(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x882ED0))(0, , );
	}
	template <typename T = void> static T Write_310(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x883414))(0, , );
	}
	template <typename T = uintptr_t> static T Read_310(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8836F4))(0, , );
	}
	template <typename T = void> static T Write_311(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x883A24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_311(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x883FD0))(0, , );
	}
	template <typename T = void> static T Write_312(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88473C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_312(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x884A1C))(0, , );
	}
	template <typename T = void> static T Write_313(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x884D4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_313(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x885088))(0, , );
	}
	template <typename T = void> static T Write_314(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x885364))(0, , );
	}
	template <typename T = uintptr_t> static T Read_314(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x885544))(0, , );
	}
	template <typename T = void> static T Write_315(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8856C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_315(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x885CD0))(0, , );
	}
	template <typename T = void> static T Write_316(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x886300))(0, , );
	}
	template <typename T = uintptr_t> static T Read_316(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x886CB0))(0, , );
	}
	template <typename T = void> static T Write_317(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88781C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_317(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x887B2C))(0, , );
	}
	template <typename T = void> static T Write_318(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x887ED0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_318(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8880F8))(0, , );
	}
	template <typename T = void> static T Write_319(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x888324))(0, , );
	}
	template <typename T = uintptr_t> static T Read_319(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88888C))(0, , );
	}
	template <typename T = void> static T Write_320(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x888EFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_320(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x889878))(0, , );
	}
	template <typename T = void> static T Write_321(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88A3F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_321(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88A75C))(0, , );
	}
	template <typename T = void> static T Write_322(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88AB00))(0, , );
	}
	template <typename T = uintptr_t> static T Read_322(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88AEC8))(0, , );
	}
	template <typename T = void> static T Write_323(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88B324))(0, , );
	}
	template <typename T = uintptr_t> static T Read_323(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88B504))(0, , );
	}
	template <typename T = void> static T Write_324(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88B684))(0, , );
	}
	template <typename T = uintptr_t> static T Read_324(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88B8AC))(0, , );
	}
	template <typename T = void> static T Write_325(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88BAD8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_325(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88BEB0))(0, , );
	}
	template <typename T = void> static T Write_326(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88C390))(0, , );
	}
	template <typename T = uintptr_t> static T Read_326(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88C7A4))(0, , );
	}
	template <typename T = void> static T Write_327(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88CD3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_327(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88D178))(0, , );
	}
	template <typename T = void> static T Write_328(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88D5C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_328(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88D828))(0, , );
	}
	template <typename T = void> static T Write_329(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88DA54))(0, , );
	}
	template <typename T = uintptr_t> static T Read_329(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88E3E4))(0, , );
	}
	template <typename T = void> static T Write_330(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88EF70))(0, , );
	}
	template <typename T = uintptr_t> static T Read_330(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88F1D4))(0, , );
	}
	template <typename T = void> static T Write_331(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88F400))(0, , );
	}
	template <typename T = uintptr_t> static T Read_331(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88F6DC))(0, , );
	}
	template <typename T = void> static T Write_332(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88F9BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_332(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89004C))(0, , );
	}
	template <typename T = void> static T Write_333(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8909A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_333(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x890C7C))(0, , );
	}
	template <typename T = void> static T Write_334(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x890F5C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_334(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8915EC))(0, , );
	}
	template <typename T = void> static T Write_335(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x891F40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_335(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89237C))(0, , );
	}
	template <typename T = void> static T Write_336(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x892888))(0, , );
	}
	template <typename T = uintptr_t> static T Read_336(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89345C))(0, , );
	}
	template <typename T = void> static T Write_337(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x894264))(0, , );
	}
	template <typename T = uintptr_t> static T Read_337(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x894444))(0, , );
	}
	template <typename T = void> static T Write_338(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8945C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_338(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x894FB0))(0, , );
	}
	template <typename T = void> static T Write_339(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x895B68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_339(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x895F2C))(0, , );
	}
	template <typename T = void> static T Write_340(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8962BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_340(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8965E8))(0, , );
	}
	template <typename T = void> static T Write_341(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x896988))(0, , );
	}
	template <typename T = uintptr_t> static T Read_341(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x896D4C))(0, , );
	}
	template <typename T = void> static T Write_342(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8970DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_342(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x897408))(0, , );
	}
	template <typename T = void> static T Write_343(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8977A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_343(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x897A68))(0, , );
	}
	template <typename T = void> static T Write_344(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x897D4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_344(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x898168))(0, , );
	}
	template <typename T = void> static T Write_345(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89866C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_345(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8989B8))(0, , );
	}
	template <typename T = void> static T Write_346(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x898C88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_346(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x899224))(0, , );
	}
	template <typename T = void> static T Write_347(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x899880))(0, , );
	}
	template <typename T = uintptr_t> static T Read_347(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x899A60))(0, , );
	}
	template <typename T = void> static T Write_348(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x899BE0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_348(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89AACC))(0, , );
	}
	template <typename T = void> static T Write_349(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89BBE0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_349(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89BE08))(0, , );
	}
	template <typename T = void> static T Write_350(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89C034))(0, , );
	}
	template <typename T = uintptr_t> static T Read_350(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89C7BC))(0, , );
	}
	template <typename T = void> static T Write_351(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89D0D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_351(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89DA50))(0, , );
	}
	template <typename T = void> static T Write_352(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89E4CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_352(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89E79C))(0, , );
	}
	template <typename T = void> static T Write_353(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89EA7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_353(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89ECA4))(0, , );
	}
	template <typename T = void> static T Write_354(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89EED0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_354(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89F1A0))(0, , );
	}
	template <typename T = void> static T Write_355(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89F480))(0, , );
	}
	template <typename T = uintptr_t> static T Read_355(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A00A4))(0, , );
	}
	template <typename T = void> static T Write_356(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F7574))(0, , );
	}
	template <typename T = uintptr_t> static T Read_356(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F8AC8))(0, , );
	}
	template <typename T = void> static T Write_357(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A0EA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_357(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A1188))(0, , );
	}
	template <typename T = void> static T Write_358(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A1468))(0, , );
	}
	template <typename T = uintptr_t> static T Read_358(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A252C))(0, , );
	}
	template <typename T = void> static T Write_359(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A3DD4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_359(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A4198))(0, , );
	}
	template <typename T = void> static T Write_360(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77EA3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_360(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77F8C8))(0, , );
	}
	template <typename T = void> static T Write_361(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A4528))(0, , );
	}
	template <typename T = uintptr_t> static T Read_361(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A4708))(0, , );
	}
	template <typename T = void> static T Write_362(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A4888))(0, , );
	}
	template <typename T = uintptr_t> static T Read_362(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A4BEC))(0, , );
	}
	template <typename T = void> static T Write_363(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A5014))(0, , );
	}
	template <typename T = uintptr_t> static T Read_363(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A52D4))(0, , );
	}
	template <typename T = void> static T Write_364(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A55B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_364(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A59EC))(0, , );
	}
	template <typename T = void> static T Write_365(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A5EF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_365(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A60D0))(0, , );
	}
	template <typename T = void> static T Write_366(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A6250))(0, , );
	}
	template <typename T = uintptr_t> static T Read_366(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A6520))(0, , );
	}
	template <typename T = void> static T Write_367(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A6800))(0, , );
	}
	template <typename T = uintptr_t> static T Read_367(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A6A64))(0, , );
	}
	template <typename T = void> static T Write_368(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A6CDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_368(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A74B0))(0, , );
	}
	template <typename T = void> static T Write_369(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A7D3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_369(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A7FA0))(0, , );
	}
	template <typename T = void> static T Write_370(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A81CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_370(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A849C))(0, , );
	}
	template <typename T = void> static T Write_371(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A877C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_371(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A895C))(0, , );
	}
	template <typename T = void> static T Write_372(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A8ADC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_372(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A932C))(0, , );
	}
	template <typename T = void> static T Write_373(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A9D0C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_373(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A9FEC))(0, , );
	}
	template <typename T = void> static T Write_374(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AA2CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_374(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AA628))(0, , );
	}
	template <typename T = void> static T Write_375(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AA9B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_375(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AAC88))(0, , );
	}
	template <typename T = void> static T Write_376(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AAF68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_376(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AB4E0))(0, , );
	}
	template <typename T = void> static T Write_377(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ABB50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_377(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ABDB4))(0, , );
	}
	template <typename T = void> static T Write_378(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ABFE0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_378(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AC48C))(0, , );
	}
	template <typename T = void> static T Write_379(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ACACC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_379(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ACDAC))(0, , );
	}
	template <typename T = void> static T Write_380(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AD08C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_380(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AD4CC))(0, , );
	}
	template <typename T = void> static T Write_381(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AD918))(0, , );
	}
	template <typename T = uintptr_t> static T Read_381(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ADB84))(0, , );
	}
	template <typename T = void> static T Write_382(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ADDC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_382(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AEDAC))(0, , );
	}
	template <typename T = void> static T Write_383(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B0134))(0, , );
	}
	template <typename T = uintptr_t> static T Read_383(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B050C))(0, , );
	}
	template <typename T = void> static T Write_384(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B08E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_384(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B0D18))(0, , );
	}
	template <typename T = void> static T Write_385(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B1164))(0, , );
	}
	template <typename T = uintptr_t> static T Read_385(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B1344))(0, , );
	}
	template <typename T = void> static T Write_386(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B14C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_386(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B1904))(0, , );
	}
	template <typename T = void> static T Write_387(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B1D50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_387(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B2020))(0, , );
	}
	template <typename T = void> static T Write_388(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B2300))(0, , );
	}
	template <typename T = uintptr_t> static T Read_388(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B27BC))(0, , );
	}
	template <typename T = void> static T Write_389(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B2CC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_389(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B2F90))(0, , );
	}
	template <typename T = void> static T Write_390(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B3270))(0, , );
	}
	template <typename T = uintptr_t> static T Read_390(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B3540))(0, , );
	}
	template <typename T = void> static T Write_391(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B3820))(0, , );
	}
	template <typename T = uintptr_t> static T Read_391(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B3A84))(0, , );
	}
	template <typename T = void> static T Write_392(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B3CB0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_392(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B3FEC))(0, , );
	}
	template <typename T = void> static T Write_393(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B438C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_393(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B456C))(0, , );
	}
	template <typename T = void> static T Write_394(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B46EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_394(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B49CC))(0, , );
	}
	template <typename T = void> static T Write_395(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B4CAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_395(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B4E8C))(0, , );
	}
	template <typename T = void> static T Write_396(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B500C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_396(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B5FE4))(0, , );
	}
	template <typename T = void> static T Write_397(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B6EF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_397(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B70D0))(0, , );
	}
	template <typename T = void> static T Write_398(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B7250))(0, , );
	}
	template <typename T = uintptr_t> static T Read_398(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B8E00))(0, , );
	}
	template <typename T = void> static T Write_399(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BAC24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_399(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BAE88))(0, , );
	}
	template <typename T = void> static T Write_400(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BB0B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_400(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BB4E8))(0, , );
	}
	template <typename T = void> static T Write_401(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BB934))(0, , );
	}
	template <typename T = uintptr_t> static T Read_401(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BBB14))(0, , );
	}
	template <typename T = void> static T Write_402(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BBC94))(0, , );
	}
	template <typename T = uintptr_t> static T Read_402(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BC498))(0, , );
	}
	template <typename T = void> static T Write_403(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BCD40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_403(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BCF20))(0, , );
	}
	template <typename T = void> static T Write_404(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BD0A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_404(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BD5DC))(0, , );
	}
	template <typename T = void> static T Write_405(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BDBA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_405(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BE074))(0, , );
	}
	template <typename T = void> static T Write_406(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BE62C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_406(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BFB48))(0, , );
	}
	template <typename T = void> static T Write_407(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C167C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_407(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C195C))(0, , );
	}
	template <typename T = void> static T Write_408(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C1C3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_408(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C22C8))(0, , );
	}
	template <typename T = void> static T Write_409(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C2A6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_409(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C2D4C))(0, , );
	}
	template <typename T = void> static T Write_410(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C302C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_410(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C3660))(0, , );
	}
	template <typename T = void> static T Write_411(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C3D60))(0, , );
	}
	template <typename T = uintptr_t> static T Read_411(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C3FC4))(0, , );
	}
	template <typename T = void> static T Write_412(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C41F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_412(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C4630))(0, , );
	}
	template <typename T = void> static T Write_413(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C4A7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_413(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C4D4C))(0, , );
	}
	template <typename T = void> static T Write_414(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C502C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_414(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C59F4))(0, , );
	}
	template <typename T = void> static T Write_415(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C6530))(0, , );
	}
	template <typename T = uintptr_t> static T Read_415(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C6710))(0, , );
	}
	template <typename T = void> static T Write_416(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C6890))(0, , );
	}
	template <typename T = uintptr_t> static T Read_416(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C7104))(0, , );
	}
	template <typename T = void> static T Write_417(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C7A54))(0, , );
	}
	template <typename T = uintptr_t> static T Read_417(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C7E30))(0, , );
	}
	template <typename T = void> static T Write_418(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C81C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_418(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C89B4))(0, , );
	}
	template <typename T = void> static T Write_419(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C90C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_419(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C92A4))(0, , );
	}
	template <typename T = void> static T Write_420(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C9424))(0, , );
	}
	template <typename T = uintptr_t> static T Read_420(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C9C8C))(0, , );
	}
	template <typename T = void> static T Write_421(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CA524))(0, , );
	}
	template <typename T = uintptr_t> static T Read_421(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CA704))(0, , );
	}
	template <typename T = void> static T Write_422(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CA884))(0, , );
	}
	template <typename T = uintptr_t> static T Read_422(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CBEE0))(0, , );
	}
	template <typename T = void> static T Write_423(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CDE24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_423(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CE004))(0, , );
	}
	template <typename T = void> static T Write_424(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CE184))(0, , );
	}
	template <typename T = uintptr_t> static T Read_424(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D0A3C))(0, , );
	}
	template <typename T = void> static T Write_425(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D3EF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_425(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D40D4))(0, , );
	}
	template <typename T = void> static T Write_426(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D4254))(0, , );
	}
	template <typename T = uintptr_t> static T Read_426(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D4530))(0, , );
	}
	template <typename T = void> static T Write_427(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D4810))(0, , );
	}
	template <typename T = uintptr_t> static T Read_427(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D4B6C))(0, , );
	}
	template <typename T = void> static T Write_428(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D4F90))(0, , );
	}
	template <typename T = uintptr_t> static T Read_428(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D57F8))(0, , );
	}
	template <typename T = void> static T Write_429(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D6090))(0, , );
	}
	template <typename T = uintptr_t> static T Read_429(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D6270))(0, , );
	}
	template <typename T = void> static T Write_430(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D63F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_430(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D758C))(0, , );
	}
	template <typename T = void> static T Write_431(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D89A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_431(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D8CF0))(0, , );
	}
	template <typename T = void> static T Write_432(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D90F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_432(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8DB3B0))(0, , );
	}
	template <typename T = void> static T Write_433(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8DE0FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_433(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8DE2DC))(0, , );
	}
	template <typename T = void> static T Write_434(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8DE45C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_434(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E03C8))(0, , );
	}
	template <typename T = void> static T Write_435(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E2F1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_435(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E30FC))(0, , );
	}
	template <typename T = void> static T Write_436(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E327C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_436(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E34A4))(0, , );
	}
	template <typename T = void> static T Write_437(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E36D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_437(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E393C))(0, , );
	}
	template <typename T = void> static T Write_438(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E3B78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_438(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E3FB8))(0, , );
	}
	template <typename T = void> static T Write_439(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E4404))(0, , );
	}
	template <typename T = uintptr_t> static T Read_439(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E4668))(0, , );
	}
	template <typename T = void> static T Write_440(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E4894))(0, , );
	}
	template <typename T = uintptr_t> static T Read_440(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E5030))(0, , );
	}
	template <typename T = void> static T Write_441(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E58A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_441(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E5AD0))(0, , );
	}
	template <typename T = void> static T Write_442(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E5D0C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_442(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E6048))(0, , );
	}
	template <typename T = void> static T Write_443(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E63E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_443(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E6648))(0, , );
	}
	template <typename T = void> static T Write_444(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E6874))(0, , );
	}
	template <typename T = uintptr_t> static T Read_444(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E7108))(0, , );
	}
	template <typename T = void> static T Write_445(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E7AAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_445(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E7D18))(0, , );
	}
	template <typename T = void> static T Write_446(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E7F54))(0, , );
	}
	template <typename T = uintptr_t> static T Read_446(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E9A10))(0, , );
	}
	template <typename T = void> static T Write_447(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EBB34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_447(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EBDA0))(0, , );
	}
	template <typename T = void> static T Write_448(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EBFDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_448(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EC308))(0, , );
	}
	template <typename T = void> static T Write_449(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EC6A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_449(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EC914))(0, , );
	}
	template <typename T = void> static T Write_450(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ECB50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_450(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EE248))(0, , );
	}
	template <typename T = void> static T Write_451(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EFE74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_451(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F0054))(0, , );
	}
	template <typename T = void> static T Write_452(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F01D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_452(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F0E08))(0, , );
	}
	template <typename T = void> static T Write_453(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F1B28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_453(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F1D08))(0, , );
	}
	template <typename T = void> static T Write_454(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F1E88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_454(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F22C8))(0, , );
	}
	template <typename T = void> static T Write_455(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F2714))(0, , );
	}
	template <typename T = uintptr_t> static T Read_455(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F28F4))(0, , );
	}
	template <typename T = void> static T Write_456(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F2A74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_456(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F4288))(0, , );
	}
	template <typename T = void> static T Write_457(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F5D3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_457(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F5FA0))(0, , );
	}
	template <typename T = void> static T Write_458(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F6280))(0, , );
	}
	template <typename T = uintptr_t> static T Read_458(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F67A4))(0, , );
	}
	template <typename T = void> static T Write_459(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F6D6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_459(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F6F4C))(0, , );
	}
	template <typename T = void> static T Write_460(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F70CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_460(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F750C))(0, , );
	}
	template <typename T = void> static T Write_461(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F7958))(0, , );
	}
	template <typename T = uintptr_t> static T Read_461(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F7B38))(0, , );
	}
	template <typename T = void> static T Write_462(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F7CB8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_462(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F8118))(0, , );
	}
	template <typename T = void> static T Write_463(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F86B0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_463(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F8890))(0, , );
	}
	template <typename T = void> static T Write_464(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F8A10))(0, , );
	}
	template <typename T = uintptr_t> static T Read_464(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F8E50))(0, , );
	}
	template <typename T = void> static T Write_465(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F929C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_465(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F947C))(0, , );
	}
	template <typename T = void> static T Write_466(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F95FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_466(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FA270))(0, , );
	}
	template <typename T = void> static T Write_467(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FB27C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_467(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FB45C))(0, , );
	}
	template <typename T = void> static T Write_468(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FB5DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_468(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FBDF0))(0, , );
	}
	template <typename T = void> static T Write_469(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FC718))(0, , );
	}
	template <typename T = uintptr_t> static T Read_469(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FC8F8))(0, , );
	}
	template <typename T = void> static T Write_470(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FCA78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_470(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FD944))(0, , );
	}
	template <typename T = void> static T Write_471(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FE7B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_471(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FF0D0))(0, , );
	}
	template <typename T = void> static T Write_472(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FFC84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_472(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FFE64))(0, , );
	}
	template <typename T = void> static T Write_473(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FFFE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_473(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x900248))(0, , );
	}
	template <typename T = void> static T Write_474(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x900474))(0, , );
	}
	template <typename T = uintptr_t> static T Read_474(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9007BC))(0, , );
	}
	template <typename T = void> static T Write_475(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x900BDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_475(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x900E40))(0, , );
	}
	template <typename T = void> static T Write_476(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90106C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_476(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9013B4))(0, , );
	}
	template <typename T = void> static T Write_477(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9017D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_477(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9019B4))(0, , );
	}
	template <typename T = void> static T Write_478(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x901B34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_478(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9022D0))(0, , );
	}
	template <typename T = void> static T Write_479(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x902AAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_479(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x902C8C))(0, , );
	}
	template <typename T = void> static T Write_480(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x902E0C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_480(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9043A0))(0, , );
	}
	template <typename T = void> static T Write_481(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x905854))(0, , );
	}
	template <typename T = uintptr_t> static T Read_481(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x905AC0))(0, , );
	}
	template <typename T = void> static T Write_482(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x905CFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_482(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x905F60))(0, , );
	}
	template <typename T = void> static T Write_483(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90618C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_483(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9063F8))(0, , );
	}
	template <typename T = void> static T Write_484(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x906634))(0, , );
	}
	template <typename T = uintptr_t> static T Read_484(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x906898))(0, , );
	}
	template <typename T = void> static T Write_485(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x906AC4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_485(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x906EA4))(0, , );
	}
	template <typename T = void> static T Write_486(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x907300))(0, , );
	}
	template <typename T = uintptr_t> static T Read_486(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x907564))(0, , );
	}
	template <typename T = void> static T Write_487(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x907790))(0, , );
	}
	template <typename T = uintptr_t> static T Read_487(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9079FC))(0, , );
	}
	template <typename T = void> static T Write_488(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x907C38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_488(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x907E9C))(0, , );
	}
	template <typename T = void> static T Write_489(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9080C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_489(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x908398))(0, , );
	}
	template <typename T = void> static T Write_490(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9085B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_490(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x908798))(0, , );
	}
	template <typename T = void> static T Write_491(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x908918))(0, , );
	}
	template <typename T = uintptr_t> static T Read_491(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x908B7C))(0, , );
	}
	template <typename T = void> static T Write_492(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x908DA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_492(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x908F88))(0, , );
	}
	template <typename T = void> static T Write_493(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x909108))(0, , );
	}
	template <typename T = uintptr_t> static T Read_493(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90936C))(0, , );
	}
	template <typename T = void> static T Write_494(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x909598))(0, , );
	}
	template <typename T = uintptr_t> static T Read_494(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x909970))(0, , );
	}
	template <typename T = void> static T Write_495(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x909DC4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_495(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90A110))(0, , );
	}
	template <typename T = void> static T Write_496(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90A3E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_496(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90A648))(0, , );
	}
	template <typename T = void> static T Write_497(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90A874))(0, , );
	}
	template <typename T = uintptr_t> static T Read_497(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90AF34))(0, , );
	}
	template <typename T = void> static T Write_498(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90B710))(0, , );
	}
	template <typename T = uintptr_t> static T Read_498(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90D77C))(0, , );
	}
	template <typename T = void> static T Write_499(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x910320))(0, , );
	}
	template <typename T = uintptr_t> static T Read_499(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x910680))(0, , );
	}
	template <typename T = void> static T Write_500(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x910A24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_500(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x910DF8))(0, , );
	}
	template <typename T = void> static T Write_501(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91124C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_501(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9117D4))(0, , );
	}
	template <typename T = void> static T Write_502(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x911F40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_502(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x912B1C))(0, , );
	}
	template <typename T = void> static T Write_503(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x913914))(0, , );
	}
	template <typename T = uintptr_t> static T Read_503(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x913D54))(0, , );
	}
	template <typename T = void> static T Write_504(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x914264))(0, , );
	}
	template <typename T = uintptr_t> static T Read_504(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9144C8))(0, , );
	}
	template <typename T = void> static T Write_505(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9146F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_505(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91495C))(0, , );
	}
	template <typename T = void> static T Write_506(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x914B88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_506(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x914DEC))(0, , );
	}
	template <typename T = void> static T Write_507(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x915018))(0, , );
	}
	template <typename T = uintptr_t> static T Read_507(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9153F4))(0, , );
	}
	template <typename T = void> static T Write_508(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x915838))(0, , );
	}
	template <typename T = uintptr_t> static T Read_508(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x916880))(0, , );
	}
	template <typename T = void> static T Write_509(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x917ED4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_509(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91917C))(0, , );
	}
	template <typename T = void> static T Write_510(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91AAF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_510(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91AF44))(0, , );
	}
	template <typename T = void> static T Write_511(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91B4DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_511(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91B8B8))(0, , );
	}
	template <typename T = void> static T Write_512(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91BCFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_512(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91BFDC))(0, , );
	}
	template <typename T = void> static T Write_513(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91C30C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_513(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91C578))(0, , );
	}
	template <typename T = void> static T Write_514(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91C7B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_514(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91CA9C))(0, , );
	}
	template <typename T = void> static T Write_515(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91CD84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_515(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91D0E8))(0, , );
	}
	template <typename T = void> static T Write_516(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91D48C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_516(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91D76C))(0, , );
	}
	template <typename T = void> static T Write_517(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91DA4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_517(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91DCB0))(0, , );
	}
	template <typename T = void> static T Write_518(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91DEDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_518(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91F5A0))(0, , );
	}
	template <typename T = void> static T Write_519(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x921398))(0, , );
	}
	template <typename T = uintptr_t> static T Read_519(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9218DC))(0, , );
	}
	template <typename T = void> static T Write_520(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92201C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_520(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x923558))(0, , );
	}
	template <typename T = void> static T Write_521(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92527C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_521(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x926718))(0, , );
	}
	template <typename T = void> static T Write_522(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x928390))(0, , );
	}
	template <typename T = uintptr_t> static T Read_522(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9286EC))(0, , );
	}
	template <typename T = void> static T Write_523(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x928A7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_523(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92A9A0))(0, , );
	}
	template <typename T = void> static T Write_524(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92D0E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_524(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92D4EC))(0, , );
	}
	template <typename T = void> static T Write_525(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92D9DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_525(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92DCC4))(0, , );
	}
	template <typename T = void> static T Write_526(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92DFAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_526(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92E290))(0, , );
	}
	template <typename T = void> static T Write_527(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92E578))(0, , );
	}
	template <typename T = uintptr_t> static T Read_527(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92E9BC))(0, , );
	}
	template <typename T = void> static T Write_528(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92EEE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_528(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92F0C4))(0, , );
	}
	template <typename T = void> static T Write_529(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92F244))(0, , );
	}
	template <typename T = uintptr_t> static T Read_529(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92FB54))(0, , );
	}
	template <typename T = void> static T Write_530(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9305D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_530(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9314BC))(0, , );
	}
	template <typename T = void> static T Write_531(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9329EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_531(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x932D50))(0, , );
	}
	template <typename T = void> static T Write_532(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9330F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_532(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93343C))(0, , );
	}
	template <typename T = void> static T Write_533(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9337CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_533(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9339AC))(0, , );
	}
	template <typename T = void> static T Write_534(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x933B2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_534(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x933D98))(0, , );
	}
	template <typename T = void> static T Write_535(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x933FD4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_535(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x934238))(0, , );
	}
	template <typename T = void> static T Write_536(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x934464))(0, , );
	}
	template <typename T = uintptr_t> static T Read_536(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9348C8))(0, , );
	}
	template <typename T = void> static T Write_537(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x934E68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_537(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x935248))(0, , );
	}
	template <typename T = void> static T Write_538(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x935734))(0, , );
	}
	template <typename T = uintptr_t> static T Read_538(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x935E28))(0, , );
	}
	template <typename T = void> static T Write_539(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93665C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_539(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x936DBC))(0, , );
	}
	template <typename T = void> static T Write_540(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93763C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_540(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x937A48))(0, , );
	}
	template <typename T = void> static T Write_541(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x937F38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_541(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x938118))(0, , );
	}
	template <typename T = void> static T Write_542(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x938298))(0, , );
	}
	template <typename T = uintptr_t> static T Read_542(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x938478))(0, , );
	}
	template <typename T = void> static T Write_543(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9385F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_543(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x938820))(0, , );
	}
	template <typename T = void> static T Write_544(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x938A4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_544(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x938CB0))(0, , );
	}
	template <typename T = void> static T Write_545(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x938EDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_545(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9391AC))(0, , );
	}
	template <typename T = void> static T Write_546(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93948C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_546(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9396EC))(0, , );
	}
	template <typename T = void> static T Write_547(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x939918))(0, , );
	}
	template <typename T = uintptr_t> static T Read_547(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x939BF4))(0, , );
	}
	template <typename T = void> static T Write_548(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x939ED4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_548(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93A7E4))(0, , );
	}
	template <typename T = void> static T Write_549(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93B420))(0, , );
	}
	template <typename T = uintptr_t> static T Read_549(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93B708))(0, , );
	}
	template <typename T = void> static T Write_550(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93B9F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_550(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93BC18))(0, , );
	}
	template <typename T = void> static T Write_551(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93BE44))(0, , );
	}
	template <typename T = uintptr_t> static T Read_551(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93C104))(0, , );
	}
	template <typename T = void> static T Write_552(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93C3E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_552(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93C6A8))(0, , );
	}
	template <typename T = void> static T Write_553(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93C98C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_553(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93CBF0))(0, , );
	}
	template <typename T = void> static T Write_554(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93CE68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_554(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93D194))(0, , );
	}
	template <typename T = void> static T Write_555(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93D534))(0, , );
	}
	template <typename T = uintptr_t> static T Read_555(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93D974))(0, , );
	}
	template <typename T = void> static T Write_556(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93DDC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_556(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93E024))(0, , );
	}
	template <typename T = void> static T Write_557(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93E250))(0, , );
	}
	template <typename T = uintptr_t> static T Read_557(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93E5AC))(0, , );
	}
	template <typename T = void> static T Write_558(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93E93C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_558(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93EBA0))(0, , );
	}
	template <typename T = void> static T Write_559(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93EDCC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_559(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93F030))(0, , );
	}
	template <typename T = void> static T Write_560(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93F25C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_560(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93F4C0))(0, , );
	}
	template <typename T = void> static T Write_561(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93F6EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_561(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93F9D4))(0, , );
	}
	template <typename T = void> static T Write_562(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93FCC4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_562(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x93FFAC))(0, , );
	}
	template <typename T = void> static T Write_563(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94029C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_563(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x940584))(0, , );
	}
	template <typename T = void> static T Write_564(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x940874))(0, , );
	}
	template <typename T = uintptr_t> static T Read_564(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x940CD0))(0, , );
	}
	template <typename T = void> static T Write_565(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9411E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_565(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9414C0))(0, , );
	}
	template <typename T = void> static T Write_566(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9417A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_566(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x941AE8))(0, , );
	}
	template <typename T = void> static T Write_567(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x941E78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_567(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9421BC))(0, , );
	}
	template <typename T = void> static T Write_568(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94256C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_568(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9428B0))(0, , );
	}
	template <typename T = void> static T Write_569(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x942C60))(0, , );
	}
	template <typename T = uintptr_t> static T Read_569(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x942EC4))(0, , );
	}
	template <typename T = void> static T Write_570(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9430F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_570(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x943ED8))(0, , );
	}
	template <typename T = void> static T Write_571(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94501C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_571(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9453FC))(0, , );
	}
	template <typename T = void> static T Write_572(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9458E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_572(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x946188))(0, , );
	}
	template <typename T = void> static T Write_573(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x946AF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_573(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x946CD4))(0, , );
	}
	template <typename T = void> static T Write_574(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x946E54))(0, , );
	}
	template <typename T = uintptr_t> static T Read_574(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9478C4))(0, , );
	}
	template <typename T = void> static T Write_575(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x948590))(0, , );
	}
	template <typename T = uintptr_t> static T Read_575(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x948878))(0, , );
	}
	template <typename T = void> static T Write_576(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x948B68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_576(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x948FA4))(0, , );
	}
	template <typename T = void> static T Write_577(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9494B0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_577(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x949714))(0, , );
	}
	template <typename T = void> static T Write_578(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x949940))(0, , );
	}
	template <typename T = uintptr_t> static T Read_578(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94A244))(0, , );
	}
	template <typename T = void> static T Write_579(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94AD94))(0, , );
	}
	template <typename T = uintptr_t> static T Read_579(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94AF74))(0, , );
	}
	template <typename T = void> static T Write_580(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94B0F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_580(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94BB7C))(0, , );
	}
	template <typename T = void> static T Write_581(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94C7A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_581(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94C988))(0, , );
	}
	template <typename T = void> static T Write_582(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94CB08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_582(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94DE88))(0, , );
	}
	template <typename T = void> static T Write_583(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94F854))(0, , );
	}
	template <typename T = uintptr_t> static T Read_583(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94FAB8))(0, , );
	}
	template <typename T = void> static T Write_584(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94FCE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_584(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94FF48))(0, , );
	}
	template <typename T = void> static T Write_585(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x950174))(0, , );
	}
	template <typename T = uintptr_t> static T Read_585(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9503D8))(0, , );
	}
	template <typename T = void> static T Write_586(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x950604))(0, , );
	}
	template <typename T = uintptr_t> static T Read_586(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x950ABC))(0, , );
	}
	template <typename T = void> static T Write_587(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x950FC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_587(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x951224))(0, , );
	}
	template <typename T = void> static T Write_588(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x951504))(0, , );
	}
	template <typename T = uintptr_t> static T Read_588(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x951768))(0, , );
	}
	template <typename T = void> static T Write_589(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x951994))(0, , );
	}
	template <typename T = uintptr_t> static T Read_589(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x951C00))(0, , );
	}
	template <typename T = void> static T Write_590(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x951E3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_590(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x954880))(0, , );
	}
	template <typename T = void> static T Write_591(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x957CFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_591(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x957F60))(0, , );
	}
	template <typename T = void> static T Write_592(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95818C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_592(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9583F0))(0, , );
	}
	template <typename T = void> static T Write_593(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95861C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_593(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x958904))(0, , );
	}
	template <typename T = void> static T Write_594(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x958C48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_594(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x958F38))(0, , );
	}
	template <typename T = void> static T Write_595(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95922C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_595(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x959514))(0, , );
	}
	template <typename T = void> static T Write_596(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x959804))(0, , );
	}
	template <typename T = uintptr_t> static T Read_596(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x959A70))(0, , );
	}
	template <typename T = void> static T Write_597(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x959CAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_597(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x959F94))(0, , );
	}
	template <typename T = void> static T Write_598(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95A27C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_598(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95A4E8))(0, , );
	}
	template <typename T = void> static T Write_599(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95A724))(0, , );
	}
	template <typename T = uintptr_t> static T Read_599(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95AB84))(0, , );
	}
	template <typename T = void> static T Write_600(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95B100))(0, , );
	}
	template <typename T = uintptr_t> static T Read_600(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95B5D8))(0, , );
	}
	template <typename T = void> static T Write_601(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95BC14))(0, , );
	}
	template <typename T = uintptr_t> static T Read_601(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95BF04))(0, , );
	}
	template <typename T = void> static T Write_602(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95C1F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_602(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95C564))(0, , );
	}
	template <typename T = void> static T Write_603(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95C90C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_603(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95CC74))(0, , );
	}
	template <typename T = void> static T Write_604(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95D01C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_604(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95D37C))(0, , );
	}
	template <typename T = void> static T Write_605(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95D720))(0, , );
	}
	template <typename T = uintptr_t> static T Read_605(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95DC00))(0, , );
	}
	template <typename T = void> static T Write_606(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95E288))(0, , );
	}
	template <typename T = uintptr_t> static T Read_606(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95E570))(0, , );
	}
	template <typename T = void> static T Write_607(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95E860))(0, , );
	}
	template <typename T = uintptr_t> static T Read_607(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95ED98))(0, , );
	}
	template <typename T = void> static T Write_608(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95F360))(0, , );
	}
	template <typename T = uintptr_t> static T Read_608(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95FC5C))(0, , );
	}
	template <typename T = void> static T Write_609(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x960860))(0, , );
	}
	template <typename T = uintptr_t> static T Read_609(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x960BC4))(0, , );
	}
	template <typename T = void> static T Write_610(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x960FCC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_610(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9612BC))(0, , );
	}
	template <typename T = void> static T Write_611(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9615B0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_611(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x961898))(0, , );
	}
	template <typename T = void> static T Write_612(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x961B80))(0, , );
	}
	template <typename T = uintptr_t> static T Read_612(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x961E70))(0, , );
	}
	template <typename T = void> static T Write_613(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x962164))(0, , );
	}
	template <typename T = uintptr_t> static T Read_613(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9624D0))(0, , );
	}
	template <typename T = void> static T Write_614(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x962878))(0, , );
	}
	template <typename T = uintptr_t> static T Read_614(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x962AE4))(0, , );
	}
	template <typename T = void> static T Write_615(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x962D20))(0, , );
	}
	template <typename T = uintptr_t> static T Read_615(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x963008))(0, , );
	}
	template <typename T = void> static T Write_616(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9632F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_616(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9636FC))(0, , );
	}
	template <typename T = void> static T Write_617(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x963BF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_617(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96417C))(0, , );
	}
	template <typename T = void> static T Write_618(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9648D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_618(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x964B3C))(0, , );
	}
	template <typename T = void> static T Write_619(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x964D78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_619(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9659D0))(0, , );
	}
	template <typename T = void> static T Write_620(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9669CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_620(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x966BAC))(0, , );
	}
	template <typename T = void> static T Write_621(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x966D2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_621(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x967130))(0, , );
	}
	template <typename T = void> static T Write_622(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x967620))(0, , );
	}
	template <typename T = uintptr_t> static T Read_622(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x967800))(0, , );
	}
	template <typename T = void> static T Write_623(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x967980))(0, , );
	}
	template <typename T = uintptr_t> static T Read_623(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x969AA8))(0, , );
	}
	template <typename T = void> static T Write_624(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96C228))(0, , );
	}
	template <typename T = uintptr_t> static T Read_624(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96C494))(0, , );
	}
	template <typename T = void> static T Write_625(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96C6D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_625(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96D6B8))(0, , );
	}
	template <typename T = void> static T Write_626(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96E9B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_626(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96EC9C))(0, , );
	}
	template <typename T = void> static T Write_627(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96EF8C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_627(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x971FC4))(0, , );
	}
	template <typename T = void> static T Write_628(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x975F50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_628(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9762B4))(0, , );
	}
	template <typename T = void> static T Write_629(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x976658))(0, , );
	}
	template <typename T = uintptr_t> static T Read_629(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x976E6C))(0, , );
	}
	template <typename T = void> static T Write_630(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x977794))(0, , );
	}
	template <typename T = uintptr_t> static T Read_630(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x977A7C))(0, , );
	}
	template <typename T = void> static T Write_631(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x977D6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_631(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x978E64))(0, , );
	}
	template <typename T = void> static T Write_632(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97A200))(0, , );
	}
	template <typename T = uintptr_t> static T Read_632(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97A46C))(0, , );
	}
	template <typename T = void> static T Write_633(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97A6A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_633(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97ABBC))(0, , );
	}
	template <typename T = void> static T Write_634(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97B168))(0, , );
	}
	template <typename T = uintptr_t> static T Read_634(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97B450))(0, , );
	}
	template <typename T = void> static T Write_635(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97B740))(0, , );
	}
	template <typename T = uintptr_t> static T Read_635(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97C00C))(0, , );
	}
	template <typename T = void> static T Write_636(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97CA1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_636(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97CC88))(0, , );
	}
	template <typename T = void> static T Write_637(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97CEC4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_637(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97D7B0))(0, , );
	}
	template <typename T = void> static T Write_638(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97E1BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_638(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97E9CC))(0, , );
	}
	template <typename T = void> static T Write_639(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97F2EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_639(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97FAFC))(0, , );
	}
	template <typename T = void> static T Write_640(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98041C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_640(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x980B80))(0, , );
	}
	template <typename T = void> static T Write_641(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x981364))(0, , );
	}
	template <typename T = uintptr_t> static T Read_641(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9815D0))(0, , );
	}
	template <typename T = void> static T Write_642(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98180C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_642(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x981AF4))(0, , );
	}
	template <typename T = void> static T Write_643(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x981DDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_643(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9820CC))(0, , );
	}
	template <typename T = void> static T Write_644(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9823C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_644(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x982624))(0, , );
	}
	template <typename T = void> static T Write_645(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x982850))(0, , );
	}
	template <typename T = uintptr_t> static T Read_645(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x982ABC))(0, , );
	}
	template <typename T = void> static T Write_646(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x982CF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_646(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x983324))(0, , );
	}
	template <typename T = void> static T Write_647(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x983C58))(0, , );
	}
	template <typename T = uintptr_t> static T Read_647(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x984378))(0, , );
	}
	template <typename T = void> static T Write_648(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x984E4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_648(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x985128))(0, , );
	}
	template <typename T = void> static T Write_649(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x985408))(0, , );
	}
	template <typename T = uintptr_t> static T Read_649(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9857F0))(0, , );
	}
	template <typename T = void> static T Write_650(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x985CC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_650(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x985F2C))(0, , );
	}
	template <typename T = void> static T Write_651(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x986168))(0, , );
	}
	template <typename T = uintptr_t> static T Read_651(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9863CC))(0, , );
	}
	template <typename T = void> static T Write_652(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9865F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_652(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x986864))(0, , );
	}
	template <typename T = void> static T Write_653(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x986AA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_653(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x986D88))(0, , );
	}
	template <typename T = void> static T Write_654(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x987070))(0, , );
	}
	template <typename T = uintptr_t> static T Read_654(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x987544))(0, , );
	}
	template <typename T = void> static T Write_655(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x987B80))(0, , );
	}
	template <typename T = uintptr_t> static T Read_655(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x988D4C))(0, , );
	}
	template <typename T = void> static T Write_656(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98A358))(0, , );
	}
	template <typename T = uintptr_t> static T Read_656(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98A740))(0, , );
	}
	template <typename T = void> static T Write_657(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98AC10))(0, , );
	}
	template <typename T = uintptr_t> static T Read_657(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98AF00))(0, , );
	}
	template <typename T = void> static T Write_658(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98B1F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_658(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98B560))(0, , );
	}
	template <typename T = void> static T Write_659(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98B908))(0, , );
	}
	template <typename T = uintptr_t> static T Read_659(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98BC6C))(0, , );
	}
	template <typename T = void> static T Write_660(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98C010))(0, , );
	}
	template <typename T = uintptr_t> static T Read_660(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98C5C4))(0, , );
	}
	template <typename T = void> static T Write_661(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9695D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_661(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96BC70))(0, , );
	}
	template <typename T = void> static T Write_662(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9689D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_662(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96AC90))(0, , );
	}
	template <typename T = void> static T Write_663(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x969080))(0, , );
	}
	template <typename T = uintptr_t> static T Read_663(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96B530))(0, , );
	}
	template <typename T = void> static T Write_664(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98CC2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_664(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98D070))(0, , );
	}
	template <typename T = void> static T Write_665(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9786E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_665(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x979A64))(0, , );
	}
	template <typename T = void> static T Write_666(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98D4C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_666(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98D824))(0, , );
	}
	template <typename T = void> static T Write_667(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98DBB4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_667(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98E2BC))(0, , );
	}
	template <typename T = void> static T Write_668(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9684A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_668(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96A6C8))(0, , );
	}
	template <typename T = void> static T Write_669(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x836EF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_669(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8377A4))(0, , );
	}
	template <typename T = void> static T Write_670(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98EB0C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_670(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98EED0))(0, , );
	}
	template <typename T = void> static T Write_671(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98F260))(0, , );
	}
	template <typename T = uintptr_t> static T Read_671(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98FA7C))(0, , );
	}
	template <typename T = void> static T Write_672(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9904F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_672(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x991AC8))(0, , );
	}
	template <typename T = void> static T Write_673(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x993630))(0, , );
	}
	template <typename T = uintptr_t> static T Read_673(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x993BE8))(0, , );
	}
	template <typename T = void> static T Write_674(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x994300))(0, , );
	}
	template <typename T = uintptr_t> static T Read_674(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x994EF0))(0, , );
	}
	template <typename T = void> static T Write_675(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x995D94))(0, , );
	}
	template <typename T = uintptr_t> static T Read_675(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9960F0))(0, , );
	}
	template <typename T = void> static T Write_676(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x996480))(0, , );
	}
	template <typename T = uintptr_t> static T Read_676(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9968B4))(0, , );
	}
	template <typename T = void> static T Write_677(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x996DB8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_677(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99711C))(0, , );
	}
	template <typename T = void> static T Write_678(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9974C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_678(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x997900))(0, , );
	}
	template <typename T = void> static T Write_679(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x997D4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_679(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x998224))(0, , );
	}
	template <typename T = void> static T Write_680(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9987E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_680(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x998C94))(0, , );
	}
	template <typename T = void> static T Write_681(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x999254))(0, , );
	}
	template <typename T = uintptr_t> static T Read_681(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99961C))(0, , );
	}
	template <typename T = void> static T Write_682(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9999A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_682(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x999DE4))(0, , );
	}
	template <typename T = void> static T Write_683(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99A22C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_683(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99A860))(0, , );
	}
	template <typename T = void> static T Write_684(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99B024))(0, , );
	}
	template <typename T = uintptr_t> static T Read_684(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99C38C))(0, , );
	}
	template <typename T = void> static T Write_685(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99DEE0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_685(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99E1C0))(0, , );
	}
	template <typename T = void> static T Write_686(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99E4A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_686(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99E8E0))(0, , );
	}
	template <typename T = void> static T Write_687(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99ED2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_687(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99F20C))(0, , );
	}
	template <typename T = void> static T Write_688(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99F7DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_688(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99FA40))(0, , );
	}
	template <typename T = void> static T Write_689(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99FC6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_689(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99FF54))(0, , );
	}
	template <typename T = void> static T Write_690(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A023C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_690(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A0578))(0, , );
	}
	template <typename T = void> static T Write_691(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A0918))(0, , );
	}
	template <typename T = uintptr_t> static T Read_691(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A0C00))(0, , );
	}
	template <typename T = void> static T Write_692(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A0EE8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_692(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A1224))(0, , );
	}
	template <typename T = void> static T Write_693(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A15C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_693(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A18A4))(0, , );
	}
	template <typename T = void> static T Write_694(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A1B84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_694(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A20B8))(0, , );
	}
	template <typename T = void> static T Write_695(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A2680))(0, , );
	}
	template <typename T = uintptr_t> static T Read_695(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A2960))(0, , );
	}
	template <typename T = void> static T Write_696(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A2C40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_696(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A2F20))(0, , );
	}
	template <typename T = void> static T Write_697(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A3200))(0, , );
	}
	template <typename T = uintptr_t> static T Read_697(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A35C4))(0, , );
	}
	template <typename T = void> static T Write_698(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A3954))(0, , );
	}
	template <typename T = uintptr_t> static T Read_698(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A3D18))(0, , );
	}
	template <typename T = void> static T Write_699(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A40A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_699(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A44A0))(0, , );
	}
	template <typename T = void> static T Write_700(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A48E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_700(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A4C10))(0, , );
	}
	template <typename T = void> static T Write_701(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A4FB0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_701(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A5334))(0, , );
	}
	template <typename T = void> static T Write_702(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A5768))(0, , );
	}
	template <typename T = uintptr_t> static T Read_702(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A6148))(0, , );
	}
	template <typename T = void> static T Write_703(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A6D2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_703(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A6F0C))(0, , );
	}
	template <typename T = void> static T Write_704(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A708C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_704(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A7850))(0, , );
	}
	template <typename T = void> static T Write_705(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A80F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_705(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A8474))(0, , );
	}
	template <typename T = void> static T Write_706(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A88A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_706(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A91C8))(0, , );
	}
	template <typename T = void> static T Write_707(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A9C78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_707(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A9EE4))(0, , );
	}
	template <typename T = void> static T Write_708(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AA120))(0, , );
	}
	template <typename T = uintptr_t> static T Read_708(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AA400))(0, , );
	}
	template <typename T = void> static T Write_709(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AA6E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_709(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AAE74))(0, , );
	}
	template <typename T = void> static T Write_710(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AB6E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_710(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9ABA40))(0, , );
	}
	template <typename T = void> static T Write_711(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9ABDD0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_711(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AC1B0))(0, , );
	}
	template <typename T = void> static T Write_712(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AC60C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_712(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AD7B0))(0, , );
	}
	template <typename T = void> static T Write_713(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AEC98))(0, , );
	}
	template <typename T = uintptr_t> static T Read_713(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AEF58))(0, , );
	}
	template <typename T = void> static T Write_714(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AF23C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_714(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AF578))(0, , );
	}
	template <typename T = void> static T Write_715(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AF918))(0, , );
	}
	template <typename T = uintptr_t> static T Read_715(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AFB40))(0, , );
	}
	template <typename T = void> static T Write_716(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AFD6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_716(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AFFD0))(0, , );
	}
	template <typename T = void> static T Write_717(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B01FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_717(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B05DC))(0, , );
	}
	template <typename T = void> static T Write_718(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B0A38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_718(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B11E0))(0, , );
	}
	template <typename T = void> static T Write_719(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B1AEC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_719(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B1FB0))(0, , );
	}
	template <typename T = void> static T Write_720(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B24B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_720(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B2CB4))(0, , );
	}
	template <typename T = void> static T Write_721(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B34FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_721(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B37BC))(0, , );
	}
	template <typename T = void> static T Write_722(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B3AA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_722(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B49E8))(0, , );
	}
	template <typename T = void> static T Write_723(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B55BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_723(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B58F8))(0, , );
	}
	template <typename T = void> static T Write_724(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B5CD8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_724(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B6090))(0, , );
	}
	template <typename T = void> static T Write_725(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B64E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_725(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B6980))(0, , );
	}
	template <typename T = void> static T Write_726(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B6E6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_726(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B7B04))(0, , );
	}
	template <typename T = void> static T Write_727(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B89D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_727(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B8BB0))(0, , );
	}
	template <typename T = void> static T Write_728(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B8D30))(0, , );
	}
	template <typename T = uintptr_t> static T Read_728(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B9000))(0, , );
	}
	template <typename T = void> static T Write_729(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B9220))(0, , );
	}
	template <typename T = uintptr_t> static T Read_729(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B96E0))(0, , );
	}
	template <typename T = void> static T Write_730(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B9BEC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_730(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B9E58))(0, , );
	}
	template <typename T = void> static T Write_731(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BA094))(0, , );
	}
	template <typename T = uintptr_t> static T Read_731(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BA37C))(0, , );
	}
	template <typename T = void> static T Write_732(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BA664))(0, , );
	}
	template <typename T = uintptr_t> static T Read_732(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BA844))(0, , );
	}
	template <typename T = void> static T Write_733(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BA9C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_733(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BB8E4))(0, , );
	}
	template <typename T = void> static T Write_734(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BC9A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_734(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BCB80))(0, , );
	}
	template <typename T = void> static T Write_735(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BCD00))(0, , );
	}
	template <typename T = uintptr_t> static T Read_735(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BD360))(0, , );
	}
	template <typename T = void> static T Write_736(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BDB28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_736(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BDD08))(0, , );
	}
	template <typename T = void> static T Write_737(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BDE88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_737(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BE2FC))(0, , );
	}
	template <typename T = void> static T Write_738(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BE824))(0, , );
	}
	template <typename T = uintptr_t> static T Read_738(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BEA90))(0, , );
	}
	template <typename T = void> static T Write_739(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BECCC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_739(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BF2E0))(0, , );
	}
	template <typename T = void> static T Write_740(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BF910))(0, , );
	}
	template <typename T = uintptr_t> static T Read_740(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BFAF0))(0, , );
	}
	template <typename T = void> static T Write_741(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BFC70))(0, , );
	}
	template <typename T = uintptr_t> static T Read_741(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C0914))(0, , );
	}
	template <typename T = void> static T Write_742(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C188C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_742(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C1A6C))(0, , );
	}
	template <typename T = void> static T Write_743(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C1BEC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_743(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C2924))(0, , );
	}
	template <typename T = void> static T Write_744(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C3878))(0, , );
	}
	template <typename T = uintptr_t> static T Read_744(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C3B38))(0, , );
	}
	template <typename T = void> static T Write_745(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C3E1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_745(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C42BC))(0, , );
	}
	template <typename T = void> static T Write_746(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C47A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_746(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C4AD4))(0, , );
	}
	template <typename T = void> static T Write_747(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C4E74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_747(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C50D8))(0, , );
	}
	template <typename T = void> static T Write_748(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C5304))(0, , );
	}
	template <typename T = uintptr_t> static T Read_748(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C639C))(0, , );
	}
	template <typename T = void> static T Write_749(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C7670))(0, , );
	}
	template <typename T = uintptr_t> static T Read_749(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C7898))(0, , );
	}
	template <typename T = void> static T Write_750(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C7AC4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_750(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C7FF8))(0, , );
	}
	template <typename T = void> static T Write_751(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C85C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_751(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C8824))(0, , );
	}
	template <typename T = void> static T Write_752(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C8AA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_752(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C8E68))(0, , );
	}
	template <typename T = void> static T Write_753(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C91EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_753(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C9744))(0, , );
	}
	template <typename T = void> static T Write_754(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C9E08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_754(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CA0E8))(0, , );
	}
	template <typename T = void> static T Write_755(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x868038))(0, , );
	}
	template <typename T = uintptr_t> static T Read_755(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86A1E0))(0, , );
	}
	template <typename T = void> static T Write_756(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CAA88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_756(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CB050))(0, , );
	}
	template <typename T = void> static T Write_757(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CB8A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_757(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CBB0C))(0, , );
	}
	template <typename T = void> static T Write_758(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CBD38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_758(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CC008))(0, , );
	}
	template <typename T = void> static T Write_759(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CC228))(0, , );
	}
	template <typename T = uintptr_t> static T Read_759(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CC538))(0, , );
	}
	template <typename T = void> static T Write_760(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CC808))(0, , );
	}
	template <typename T = uintptr_t> static T Read_760(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CC9E8))(0, , );
	}
	template <typename T = void> static T Write_761(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CCB68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_761(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CCDCC))(0, , );
	}
	template <typename T = void> static T Write_762(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CCFF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_762(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CD2D0))(0, , );
	}
	template <typename T = void> static T Write_763(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CD5B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_763(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CD888))(0, , );
	}
	template <typename T = void> static T Write_764(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CDB68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_764(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CDDD4))(0, , );
	}
	template <typename T = void> static T Write_765(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CE010))(0, , );
	}
	template <typename T = uintptr_t> static T Read_765(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9D4EE4))(0, , );
	}
	template <typename T = void> static T Write_766(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DDA4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_766(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DDC2C))(0, , );
	}
	template <typename T = void> static T Write_767(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DDDAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_767(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DE0F8))(0, , );
	}
	template <typename T = void> static T Write_768(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DE3CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_768(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DE630))(0, , );
	}
	template <typename T = void> static T Write_769(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DE85C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_769(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DEB44))(0, , );
	}
	template <typename T = void> static T Write_770(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DEE2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_770(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9E1780))(0, , );
	}
	template <typename T = void> static T Write_771(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9E5004))(0, , );
	}
	template <typename T = uintptr_t> static T Read_771(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9E5268))(0, , );
	}
	template <typename T = void> static T Write_772(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9E5494))(0, , );
	}
	template <typename T = uintptr_t> static T Read_772(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9E62B8))(0, , );
	}
	template <typename T = void> static T Write_773(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9E7120))(0, , );
	}
	template <typename T = uintptr_t> static T Read_773(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9EC390))(0, , );
	}
	template <typename T = void> static T Write_774(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F2D10))(0, , );
	}
	template <typename T = uintptr_t> static T Read_774(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F33FC))(0, , );
	}
	template <typename T = void> static T Write_775(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F3A38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_775(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F3C9C))(0, , );
	}
	template <typename T = void> static T Write_776(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F3EC8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_776(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F412C))(0, , );
	}
	template <typename T = void> static T Write_777(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F4358))(0, , );
	}
	template <typename T = uintptr_t> static T Read_777(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F498C))(0, , );
	}
	template <typename T = void> static T Write_778(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F508C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_778(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F5374))(0, , );
	}
	template <typename T = void> static T Write_779(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F5664))(0, , );
	}
	template <typename T = uintptr_t> static T Read_779(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F594C))(0, , );
	}
	template <typename T = void> static T Write_780(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F5C34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_780(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F5E98))(0, , );
	}
	template <typename T = void> static T Write_781(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F60C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_781(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F6474))(0, , );
	}
	template <typename T = void> static T Write_782(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F6738))(0, , );
	}
	template <typename T = uintptr_t> static T Read_782(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F699C))(0, , );
	}
	template <typename T = void> static T Write_783(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F6BC8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_783(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F6E2C))(0, , );
	}
	template <typename T = void> static T Write_784(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F7058))(0, , );
	}
	template <typename T = uintptr_t> static T Read_784(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F72BC))(0, , );
	}
	template <typename T = void> static T Write_785(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8102DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_785(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x811BF8))(0, , );
	}
	template <typename T = void> static T Write_786(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F74E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_786(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F76C8))(0, , );
	}
	template <typename T = void> static T Write_787(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F7848))(0, , );
	}
	template <typename T = uintptr_t> static T Read_787(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F7C88))(0, , );
	}
	template <typename T = void> static T Write_788(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F80D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_788(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F8988))(0, , );
	}
	template <typename T = void> static T Write_789(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F9510))(0, , );
	}
	template <typename T = uintptr_t> static T Read_789(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F96F0))(0, , );
	}
	template <typename T = void> static T Write_790(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F9870))(0, , );
	}
	template <typename T = uintptr_t> static T Read_790(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F9CB0))(0, , );
	}
	template <typename T = void> static T Write_791(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FA140))(0, , );
	}
	template <typename T = uintptr_t> static T Read_791(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FA320))(0, , );
	}
	template <typename T = void> static T Write_792(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FA4A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_792(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FB0C8))(0, , );
	}
	template <typename T = void> static T Write_793(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FBEE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_793(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FC240))(0, , );
	}
	template <typename T = void> static T Write_794(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FC61C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_794(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FCE64))(0, , );
	}
	template <typename T = void> static T Write_795(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FD948))(0, , );
	}
	template <typename T = uintptr_t> static T Read_795(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FDD88))(0, , );
	}
	template <typename T = void> static T Write_796(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FE30C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_796(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FECFC))(0, , );
	}
	template <typename T = void> static T Write_797(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FF8F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_797(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FFB20))(0, , );
	}
	template <typename T = void> static T Write_798(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FFD4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_798(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA00078))(0, , );
	}
	template <typename T = void> static T Write_799(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA00418))(0, , );
	}
	template <typename T = uintptr_t> static T Read_799(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA005F8))(0, , );
	}
	template <typename T = void> static T Write_800(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA00778))(0, , );
	}
	template <typename T = uintptr_t> static T Read_800(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA00BAC))(0, , );
	}
	template <typename T = void> static T Write_801(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA00FF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_801(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA013BC))(0, , );
	}
	template <typename T = void> static T Write_802(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0174C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_802(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA01DD8))(0, , );
	}
	template <typename T = void> static T Write_803(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA024E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_803(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA028A4))(0, , );
	}
	template <typename T = void> static T Write_804(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA02C34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_804(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0324C))(0, , );
	}
	template <typename T = void> static T Write_805(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA03894))(0, , );
	}
	template <typename T = uintptr_t> static T Read_805(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA03B64))(0, , );
	}
	template <typename T = void> static T Write_806(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA03E44))(0, , );
	}
	template <typename T = uintptr_t> static T Read_806(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0551C))(0, , );
	}
	template <typename T = void> static T Write_807(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA07170))(0, , );
	}
	template <typename T = uintptr_t> static T Read_807(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA07548))(0, , );
	}
	template <typename T = void> static T Write_808(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA07A28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_808(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA07E5C))(0, , );
	}
	template <typename T = void> static T Write_809(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA082A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_809(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA08508))(0, , );
	}
	template <typename T = void> static T Write_810(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA08734))(0, , );
	}
	template <typename T = uintptr_t> static T Read_810(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA08B0C))(0, , );
	}
	template <typename T = void> static T Write_811(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA08FEC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_811(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA09250))(0, , );
	}
	template <typename T = void> static T Write_812(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D53C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_812(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D5C44))(0, , );
	}
	template <typename T = void> static T Write_813(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0B674))(0, , );
	}
	template <typename T = uintptr_t> static T Read_813(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0B854))(0, , );
	}
	template <typename T = void> static T Write_814(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0B9D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_814(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0BC94))(0, , );
	}
	template <typename T = void> static T Write_815(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0BF78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_815(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0C258))(0, , );
	}
	template <typename T = void> static T Write_816(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0C538))(0, , );
	}
	template <typename T = uintptr_t> static T Read_816(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0C864))(0, , );
	}
	template <typename T = void> static T Write_817(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0CC04))(0, , );
	}
	template <typename T = uintptr_t> static T Read_817(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0D098))(0, , );
	}
	template <typename T = void> static T Write_818(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0D658))(0, , );
	}
	template <typename T = uintptr_t> static T Read_818(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0DBC0))(0, , );
	}
	template <typename T = void> static T Write_819(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0E2C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_819(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0E808))(0, , );
	}
	template <typename T = void> static T Write_820(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0EDB8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_820(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0F30C))(0, , );
	}
	template <typename T = void> static T Write_821(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0FA38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_821(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0FC18))(0, , );
	}
	template <typename T = void> static T Write_822(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0FD98))(0, , );
	}
	template <typename T = uintptr_t> static T Read_822(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA10BAC))(0, , );
	}
	template <typename T = void> static T Write_823(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA11BF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_823(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA11ED4))(0, , );
	}
	template <typename T = void> static T Write_824(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA121B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_824(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA125B0))(0, , );
	}
	template <typename T = void> static T Write_825(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA12AA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_825(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA12C80))(0, , );
	}
	template <typename T = void> static T Write_826(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA12E00))(0, , );
	}
	template <typename T = uintptr_t> static T Read_826(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA16AB0))(0, , );
	}
	template <typename T = void> static T Write_827(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1BD48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_827(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1BF28))(0, , );
	}
	template <typename T = void> static T Write_828(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1C0A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_828(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1C398))(0, , );
	}
	template <typename T = void> static T Write_829(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1C68C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_829(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1C8F0))(0, , );
	}
	template <typename T = void> static T Write_830(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1CB1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_830(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1CF5C))(0, , );
	}
	template <typename T = void> static T Write_831(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1D3A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_831(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1D86C))(0, , );
	}
	template <typename T = void> static T Write_832(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1DD80))(0, , );
	}
	template <typename T = uintptr_t> static T Read_832(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1DF60))(0, , );
	}
	template <typename T = void> static T Write_833(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1E0E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_833(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1E5A4))(0, , );
	}
	template <typename T = void> static T Write_834(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1EAA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_834(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1EE80))(0, , );
	}
	template <typename T = void> static T Write_835(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1F318))(0, , );
	}
	template <typename T = uintptr_t> static T Read_835(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1F4F8))(0, , );
	}
	template <typename T = void> static T Write_836(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1F678))(0, , );
	}
	template <typename T = uintptr_t> static T Read_836(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1F8DC))(0, , );
	}
	template <typename T = void> static T Write_837(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1FB08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_837(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1FCE8))(0, , );
	}
	template <typename T = void> static T Write_838(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA1FE68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_838(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA200CC))(0, , );
	}
	template <typename T = void> static T Write_839(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA202F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_839(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA20C70))(0, , );
	}
	template <typename T = void> static T Write_840(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA21840))(0, , );
	}
	template <typename T = uintptr_t> static T Read_840(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA21C00))(0, , );
	}
	template <typename T = void> static T Write_841(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA22060))(0, , );
	}
	template <typename T = uintptr_t> static T Read_841(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA223AC))(0, , );
	}
	template <typename T = void> static T Write_842(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FCEB8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_842(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FDD90))(0, , );
	}
	template <typename T = void> static T Write_843(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA22680))(0, , );
	}
	template <typename T = uintptr_t> static T Read_843(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA22940))(0, , );
	}
	template <typename T = void> static T Write_844(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA22C24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_844(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA22FE8))(0, , );
	}
	template <typename T = void> static T Write_845(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA23378))(0, , );
	}
	template <typename T = uintptr_t> static T Read_845(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA23A94))(0, , );
	}
	template <typename T = void> static T Write_846(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2430C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_846(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA24534))(0, , );
	}
	template <typename T = void> static T Write_847(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA24760))(0, , );
	}
	template <typename T = uintptr_t> static T Read_847(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA24EE0))(0, , );
	}
	template <typename T = void> static T Write_848(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA256D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_848(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA25CE0))(0, , );
	}
	template <typename T = void> static T Write_849(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA26548))(0, , );
	}
	template <typename T = uintptr_t> static T Read_849(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA268A4))(0, , );
	}
	template <typename T = void> static T Write_850(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA26C34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_850(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2715C))(0, , );
	}
	template <typename T = void> static T Write_851(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA277F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_851(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA27F74))(0, , );
	}
	template <typename T = void> static T Write_852(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA27B34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_852(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA28354))(0, , );
	}
	template <typename T = void> static T Write_853(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E4CD4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_853(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E547C))(0, , );
	}
	template <typename T = void> static T Write_854(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA28864))(0, , );
	}
	template <typename T = uintptr_t> static T Read_854(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA290F8))(0, , );
	}
	template <typename T = void> static T Write_855(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA29B10))(0, , );
	}
	template <typename T = uintptr_t> static T Read_855(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA29CF0))(0, , );
	}
	template <typename T = void> static T Write_856(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA29E70))(0, , );
	}
	template <typename T = uintptr_t> static T Read_856(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2A274))(0, , );
	}
	template <typename T = void> static T Write_857(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2A764))(0, , );
	}
	template <typename T = uintptr_t> static T Read_857(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2AA54))(0, , );
	}
	template <typename T = void> static T Write_858(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2AD48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_858(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2B030))(0, , );
	}
	template <typename T = void> static T Write_859(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2B320))(0, , );
	}
	template <typename T = uintptr_t> static T Read_859(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2B8B0))(0, , );
	}
	template <typename T = void> static T Write_860(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2BF18))(0, , );
	}
	template <typename T = uintptr_t> static T Read_860(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2C1F8))(0, , );
	}
	template <typename T = void> static T Write_861(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2C4D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_861(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2C834))(0, , );
	}
	template <typename T = void> static T Write_862(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2CBC4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_862(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2D5CC))(0, , );
	}
	template <typename T = void> static T Write_863(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2E3F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_863(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2E654))(0, , );
	}
	template <typename T = void> static T Write_864(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2E8CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_864(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2EB30))(0, , );
	}
	template <typename T = void> static T Write_865(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2ED5C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_865(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2F03C))(0, , );
	}
	template <typename T = void> static T Write_866(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2F31C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_866(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2F854))(0, , );
	}
	template <typename T = void> static T Write_867(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2FE1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_867(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2FFFC))(0, , );
	}
	template <typename T = void> static T Write_868(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3017C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_868(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA30E98))(0, , );
	}
	template <typename T = void> static T Write_869(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA31D34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_869(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA32090))(0, , );
	}
	template <typename T = void> static T Write_870(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3246C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_870(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3274C))(0, , );
	}
	template <typename T = void> static T Write_871(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA32A7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_871(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA32DB8))(0, , );
	}
	template <typename T = void> static T Write_872(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA33154))(0, , );
	}
	template <typename T = uintptr_t> static T Read_872(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA33414))(0, , );
	}
	template <typename T = void> static T Write_873(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA336F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_873(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3395C))(0, , );
	}
	template <typename T = void> static T Write_874(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA33B88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_874(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA34040))(0, , );
	}
	template <typename T = void> static T Write_875(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA34544))(0, , );
	}
	template <typename T = uintptr_t> static T Read_875(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3489C))(0, , );
	}
	template <typename T = void> static T Write_876(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA34C2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_876(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA35704))(0, , );
	}
	template <typename T = void> static T Write_877(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA36250))(0, , );
	}
	template <typename T = uintptr_t> static T Read_877(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA364B4))(0, , );
	}
	template <typename T = void> static T Write_878(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA366E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_878(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA374C0))(0, , );
	}
	template <typename T = void> static T Write_879(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA384C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_879(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA387A4))(0, , );
	}
	template <typename T = void> static T Write_880(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA38A84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_880(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA38F3C))(0, , );
	}
	template <typename T = void> static T Write_881(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA39440))(0, , );
	}
	template <typename T = uintptr_t> static T Read_881(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA39620))(0, , );
	}
	template <typename T = void> static T Write_882(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA397A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_882(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3AA48))(0, , );
	}
	template <typename T = void> static T Write_883(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3C330))(0, , );
	}
	template <typename T = uintptr_t> static T Read_883(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3CBE0))(0, , );
	}
	template <typename T = void> static T Write_884(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3D840))(0, , );
	}
	template <typename T = uintptr_t> static T Read_884(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3DB10))(0, , );
	}
	template <typename T = void> static T Write_885(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3DDF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_885(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3DFD0))(0, , );
	}
	template <typename T = void> static T Write_886(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3E150))(0, , );
	}
	template <typename T = uintptr_t> static T Read_886(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3E430))(0, , );
	}
	template <typename T = void> static T Write_887(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3E710))(0, , );
	}
	template <typename T = uintptr_t> static T Read_887(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3EA6C))(0, , );
	}
	template <typename T = void> static T Write_888(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3EDFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_888(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3F504))(0, , );
	}
	template <typename T = void> static T Write_889(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3FD5C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_889(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3FFC8))(0, , );
	}
	template <typename T = void> static T Write_890(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA40204))(0, , );
	}
	template <typename T = uintptr_t> static T Read_890(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA404DC))(0, , );
	}
	template <typename T = void> static T Write_891(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA407C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_891(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA40C88))(0, , );
	}
	template <typename T = void> static T Write_892(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA412E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_892(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA41BC0))(0, , );
	}
	template <typename T = void> static T Write_893(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA42774))(0, , );
	}
	template <typename T = uintptr_t> static T Read_893(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA42AB0))(0, , );
	}
	template <typename T = void> static T Write_894(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA42E50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_894(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA430B4))(0, , );
	}
	template <typename T = void> static T Write_895(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA432E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_895(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA435B0))(0, , );
	}
	template <typename T = void> static T Write_896(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA43890))(0, , );
	}
	template <typename T = uintptr_t> static T Read_896(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA43BD8))(0, , );
	}
	template <typename T = void> static T Write_897(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA43F68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_897(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA44148))(0, , );
	}
	template <typename T = void> static T Write_898(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA442C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_898(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA448E0))(0, , );
	}
	template <typename T = void> static T Write_899(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA44F28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_899(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4518C))(0, , );
	}
	template <typename T = void> static T Write_900(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4546C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_900(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA45694))(0, , );
	}
	template <typename T = void> static T Write_901(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA458C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_901(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA45B28))(0, , );
	}
	template <typename T = void> static T Write_902(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA45D54))(0, , );
	}
	template <typename T = uintptr_t> static T Read_902(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA46200))(0, , );
	}
	template <typename T = void> static T Write_903(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA46704))(0, , );
	}
	template <typename T = uintptr_t> static T Read_903(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA47B20))(0, , );
	}
	template <typename T = void> static T Write_904(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4935C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_904(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA49778))(0, , );
	}
	template <typename T = void> static T Write_905(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA49C7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_905(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA49F58))(0, , );
	}
	template <typename T = void> static T Write_906(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4A238))(0, , );
	}
	template <typename T = uintptr_t> static T Read_906(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4A460))(0, , );
	}
	template <typename T = void> static T Write_907(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4A68C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_907(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4B4E0))(0, , );
	}
	template <typename T = void> static T Write_908(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4C6DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_908(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4CA9C))(0, , );
	}
	template <typename T = void> static T Write_909(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4CEF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_909(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4DD78))(0, , );
	}
	template <typename T = void> static T Write_910(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4F064))(0, , );
	}
	template <typename T = uintptr_t> static T Read_910(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4F28C))(0, , );
	}
	template <typename T = void> static T Write_911(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4F4B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_911(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4F71C))(0, , );
	}
	template <typename T = void> static T Write_912(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4F948))(0, , );
	}
	template <typename T = uintptr_t> static T Read_912(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4FD7C))(0, , );
	}
	template <typename T = void> static T Write_913(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA501C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_913(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA50498))(0, , );
	}
	template <typename T = void> static T Write_914(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA50778))(0, , );
	}
	template <typename T = uintptr_t> static T Read_914(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA509A0))(0, , );
	}
	template <typename T = void> static T Write_915(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA50BCC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_915(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA50F90))(0, , );
	}
	template <typename T = void> static T Write_916(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA51320))(0, , );
	}
	template <typename T = uintptr_t> static T Read_916(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5158C))(0, , );
	}
	template <typename T = void> static T Write_917(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA517C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_917(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA51BA8))(0, , );
	}
	template <typename T = void> static T Write_918(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA52004))(0, , );
	}
	template <typename T = uintptr_t> static T Read_918(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA52268))(0, , );
	}
	template <typename T = void> static T Write_919(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA52494))(0, , );
	}
	template <typename T = uintptr_t> static T Read_919(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA527F0))(0, , );
	}
	template <typename T = void> static T Write_920(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA52B80))(0, , );
	}
	template <typename T = uintptr_t> static T Read_920(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA52F44))(0, , );
	}
	template <typename T = void> static T Write_921(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA532D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_921(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA53964))(0, , );
	}
	template <typename T = void> static T Write_922(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5406C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_922(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA543D0))(0, , );
	}
	template <typename T = void> static T Write_923(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA547B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_923(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA54B7C))(0, , );
	}
	template <typename T = void> static T Write_924(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5501C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_924(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA555FC))(0, , );
	}
	template <typename T = void> static T Write_925(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA55E0C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_925(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA56158))(0, , );
	}
	template <typename T = void> static T Write_926(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA564F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_926(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA56BB0))(0, , );
	}
	template <typename T = void> static T Write_927(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA57358))(0, , );
	}
	template <typename T = uintptr_t> static T Read_927(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA57580))(0, , );
	}
	template <typename T = void> static T Write_928(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA577AC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_928(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA57A8C))(0, , );
	}
	template <typename T = void> static T Write_929(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA57D6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_929(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA580C8))(0, , );
	}
	template <typename T = void> static T Write_930(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA58458))(0, , );
	}
	template <typename T = uintptr_t> static T Read_930(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5881C))(0, , );
	}
	template <typename T = void> static T Write_931(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA58BAC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_931(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA58E10))(0, , );
	}
	template <typename T = void> static T Write_932(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5903C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_932(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5929C))(0, , );
	}
	template <typename T = void> static T Write_933(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA594C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_933(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5972C))(0, , );
	}
	template <typename T = void> static T Write_934(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA59958))(0, , );
	}
	template <typename T = uintptr_t> static T Read_934(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA59BB8))(0, , );
	}
	template <typename T = void> static T Write_935(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA59DE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_935(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5A048))(0, , );
	}
	template <typename T = void> static T Write_936(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5A274))(0, , );
	}
	template <typename T = uintptr_t> static T Read_936(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5A768))(0, , );
	}
	template <typename T = void> static T Write_937(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5ADDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_937(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5B004))(0, , );
	}
	template <typename T = void> static T Write_938(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5B230))(0, , );
	}
	template <typename T = uintptr_t> static T Read_938(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5B670))(0, , );
	}
	template <typename T = void> static T Write_939(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5BABC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_939(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5BD20))(0, , );
	}
	template <typename T = void> static T Write_940(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5BF4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_940(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5C20C))(0, , );
	}
	template <typename T = void> static T Write_941(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5C4F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_941(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5C754))(0, , );
	}
	template <typename T = void> static T Write_942(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5C980))(0, , );
	}
	template <typename T = uintptr_t> static T Read_942(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5CDBC))(0, , );
	}
	template <typename T = void> static T Write_943(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5D208))(0, , );
	}
	template <typename T = uintptr_t> static T Read_943(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5D46C))(0, , );
	}
	template <typename T = void> static T Write_944(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5D698))(0, , );
	}
	template <typename T = uintptr_t> static T Read_944(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5D8FC))(0, , );
	}
	template <typename T = void> static T Write_945(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5DB28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_945(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5DD8C))(0, , );
	}
	template <typename T = void> static T Write_946(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5DFB8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_946(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5E314))(0, , );
	}
	template <typename T = void> static T Write_947(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5E738))(0, , );
	}
	template <typename T = uintptr_t> static T Read_947(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5E99C))(0, , );
	}
	template <typename T = void> static T Write_948(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5EBC8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_948(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5EE28))(0, , );
	}
	template <typename T = void> static T Write_949(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5F054))(0, , );
	}
	template <typename T = uintptr_t> static T Read_949(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5F2B8))(0, , );
	}
	template <typename T = void> static T Write_950(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5F4E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_950(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5F7C0))(0, , );
	}
	template <typename T = void> static T Write_951(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5FAA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_951(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5FD04))(0, , );
	}
	template <typename T = void> static T Write_952(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA5FF30))(0, , );
	}
	template <typename T = uintptr_t> static T Read_952(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA60210))(0, , );
	}
	template <typename T = void> static T Write_953(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA604F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_953(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6081C))(0, , );
	}
	template <typename T = void> static T Write_954(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA60BBC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_954(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6106C))(0, , );
	}
	template <typename T = void> static T Write_955(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA61624))(0, , );
	}
	template <typename T = uintptr_t> static T Read_955(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA63F30))(0, , );
	}
	template <typename T = void> static T Write_956(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA670BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_956(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA67320))(0, , );
	}
	template <typename T = void> static T Write_957(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6754C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_957(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA67DCC))(0, , );
	}
	template <typename T = void> static T Write_958(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA68664))(0, , );
	}
	template <typename T = uintptr_t> static T Read_958(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA68844))(0, , );
	}
	template <typename T = void> static T Write_959(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA689C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_959(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA69D5C))(0, , );
	}
	template <typename T = void> static T Write_960(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6B1A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_960(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6B678))(0, , );
	}
	template <typename T = void> static T Write_961(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6BD18))(0, , );
	}
	template <typename T = uintptr_t> static T Read_961(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6F13C))(0, , );
	}
	template <typename T = void> static T Write_962(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA63A60))(0, , );
	}
	template <typename T = uintptr_t> static T Read_962(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA66B04))(0, , );
	}
	template <typename T = void> static T Write_963(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA73168))(0, , );
	}
	template <typename T = uintptr_t> static T Read_963(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7352C))(0, , );
	}
	template <typename T = void> static T Write_964(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA738BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_964(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA73B9C))(0, , );
	}
	template <typename T = void> static T Write_965(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA73E7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_965(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA74278))(0, , );
	}
	template <typename T = void> static T Write_966(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA13C50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_966(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA17B48))(0, , );
	}
	template <typename T = void> static T Write_967(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA74768))(0, , );
	}
	template <typename T = uintptr_t> static T Read_967(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA74BA8))(0, , );
	}
	template <typename T = void> static T Write_968(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA74FF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_968(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA75378))(0, , );
	}
	template <typename T = void> static T Write_969(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA757AC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_969(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA75BEC))(0, , );
	}
	template <typename T = void> static T Write_970(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA76038))(0, , );
	}
	template <typename T = uintptr_t> static T Read_970(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA762A4))(0, , );
	}
	template <typename T = void> static T Write_971(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA764E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_971(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7681C))(0, , );
	}
	template <typename T = void> static T Write_972(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA76BBC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_972(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA76EA4))(0, , );
	}
	template <typename T = void> static T Write_973(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA77194))(0, , );
	}
	template <typename T = uintptr_t> static T Read_973(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA773F8))(0, , );
	}
	template <typename T = void> static T Write_974(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA77624))(0, , );
	}
	template <typename T = uintptr_t> static T Read_974(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA77888))(0, , );
	}
	template <typename T = void> static T Write_975(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA77AB4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_975(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA77D20))(0, , );
	}
	template <typename T = void> static T Write_976(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA77F5C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_976(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA78244))(0, , );
	}
	template <typename T = void> static T Write_977(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA78534))(0, , );
	}
	template <typename T = uintptr_t> static T Read_977(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7881C))(0, , );
	}
	template <typename T = void> static T Write_978(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA78B04))(0, , );
	}
	template <typename T = uintptr_t> static T Read_978(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA78F40))(0, , );
	}
	template <typename T = void> static T Write_979(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7944C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_979(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA79AD0))(0, , );
	}
	template <typename T = void> static T Write_980(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7A3A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_980(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7A830))(0, , );
	}
	template <typename T = void> static T Write_981(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7ADE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_981(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7B050))(0, , );
	}
	template <typename T = void> static T Write_982(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7B28C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_982(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7B4F8))(0, , );
	}
	template <typename T = void> static T Write_983(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7B734))(0, , );
	}
	template <typename T = uintptr_t> static T Read_983(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7BA1C))(0, , );
	}
	template <typename T = void> static T Write_984(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7BD04))(0, , );
	}
	template <typename T = uintptr_t> static T Read_984(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7BFF4))(0, , );
	}
	template <typename T = void> static T Write_985(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7C2E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_985(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7C828))(0, , );
	}
	template <typename T = void> static T Write_986(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7CDF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_986(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7D1B8))(0, , );
	}
	template <typename T = void> static T Write_987(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7D610))(0, , );
	}
	template <typename T = uintptr_t> static T Read_987(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7D97C))(0, , );
	}
	template <typename T = void> static T Write_988(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7DD24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_988(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7E00C))(0, , );
	}
	template <typename T = void> static T Write_989(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7E2FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_989(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7E568))(0, , );
	}
	template <typename T = void> static T Write_990(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7E7A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_990(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7E984))(0, , );
	}
	template <typename T = void> static T Write_991(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7EB04))(0, , );
	}
	template <typename T = uintptr_t> static T Read_991(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7ED68))(0, , );
	}
	template <typename T = void> static T Write_992(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7EF94))(0, , );
	}
	template <typename T = uintptr_t> static T Read_992(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7F200))(0, , );
	}
	template <typename T = void> static T Write_993(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7F43C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_993(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7F61C))(0, , );
	}
	template <typename T = void> static T Write_994(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7F79C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_994(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7FA00))(0, , );
	}
	template <typename T = void> static T Write_995(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7FC2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_995(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA7FE98))(0, , );
	}
	template <typename T = void> static T Write_996(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA800D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_996(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA80690))(0, , );
	}
	template <typename T = void> static T Write_997(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA80D00))(0, , );
	}
	template <typename T = uintptr_t> static T Read_997(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA81288))(0, , );
	}
	template <typename T = void> static T Write_998(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA81A48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_998(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA81C70))(0, , );
	}
	template <typename T = void> static T Write_999(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA81E9C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_999(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA822F4))(0, , );
	}
	template <typename T = void> static T Write_1000(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA827C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1000(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA82AA4))(0, , );
	}
	template <typename T = void> static T Write_1001(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA82D84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1001(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA82FAC))(0, , );
	}
	template <typename T = void> static T Write_1002(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA831D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1002(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA833B8))(0, , );
	}
	template <typename T = void> static T Write_1003(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA83538))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1003(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA83CDC))(0, , );
	}
	template <typename T = void> static T Write_1004(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA844D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1004(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA84894))(0, , );
	}
	template <typename T = void> static T Write_1005(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA84C24))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1005(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA84FE8))(0, , );
	}
	template <typename T = void> static T Write_1006(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8537C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1006(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA85648))(0, , );
	}
	template <typename T = void> static T Write_1007(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA85928))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1007(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA85EAC))(0, , );
	}
	template <typename T = void> static T Write_1008(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA865CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1008(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA86928))(0, , );
	}
	template <typename T = void> static T Write_1009(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA86D48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1009(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA87218))(0, , );
	}
	template <typename T = void> static T Write_1010(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8784C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1010(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA87D1C))(0, , );
	}
	template <typename T = void> static T Write_1011(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA88350))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1011(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA88610))(0, , );
	}
	template <typename T = void> static T Write_1012(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA888F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1012(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA88D28))(0, , );
	}
	template <typename T = void> static T Write_1013(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA89270))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1013(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA89530))(0, , );
	}
	template <typename T = void> static T Write_1014(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA89814))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1014(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA89A78))(0, , );
	}
	template <typename T = void> static T Write_1015(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA89CF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1015(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA89F54))(0, , );
	}
	template <typename T = void> static T Write_1016(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8A180))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1016(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8AB60))(0, , );
	}
	template <typename T = void> static T Write_1017(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8B618))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1017(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8BE64))(0, , );
	}
	template <typename T = void> static T Write_1018(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8C854))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1018(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8CB14))(0, , );
	}
	template <typename T = void> static T Write_1019(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8CDF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1019(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8D0B8))(0, , );
	}
	template <typename T = void> static T Write_1020(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8D39C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1020(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8D65C))(0, , );
	}
	template <typename T = void> static T Write_1021(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8D940))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1021(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8DC00))(0, , );
	}
	template <typename T = void> static T Write_1022(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8DEE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1022(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8E0C4))(0, , );
	}
	template <typename T = void> static T Write_1023(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8E244))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1023(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8E5A0))(0, , );
	}
	template <typename T = void> static T Write_1024(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8E930))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1024(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8EBF0))(0, , );
	}
	template <typename T = void> static T Write_1025(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8EED4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1025(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8F194))(0, , );
	}
	template <typename T = void> static T Write_1026(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8F478))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1026(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8F738))(0, , );
	}
	template <typename T = void> static T Write_1027(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8FA1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1027(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8FCDC))(0, , );
	}
	template <typename T = void> static T Write_1028(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8FFC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1028(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA90280))(0, , );
	}
	template <typename T = void> static T Write_1029(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA90564))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1029(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA90824))(0, , );
	}
	template <typename T = void> static T Write_1030(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA90B08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1030(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA90DF0))(0, , );
	}
	template <typename T = void> static T Write_1031(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA910E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1031(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA91524))(0, , );
	}
	template <typename T = void> static T Write_1032(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8A440))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1032(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8AE44))(0, , );
	}
	template <typename T = void> static T Write_1033(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8B8D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1033(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8C148))(0, , );
	}
	template <typename T = void> static T Write_1034(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9270C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1034(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA929CC))(0, , );
	}
	template <typename T = void> static T Write_1035(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA92CB0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1035(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA92FEC))(0, , );
	}
	template <typename T = void> static T Write_1036(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9338C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1036(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9356C))(0, , );
	}
	template <typename T = void> static T Write_1037(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA936EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1037(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA93950))(0, , );
	}
	template <typename T = void> static T Write_1038(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA91A38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1038(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA92084))(0, , );
	}
	template <typename T = void> static T Write_1039(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA91DA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1039(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9242C))(0, , );
	}
	template <typename T = void> static T Write_1040(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B7560))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1040(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B82AC))(0, , );
	}
	template <typename T = void> static T Write_1041(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA93B7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1041(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA93F40))(0, , );
	}
	template <typename T = void> static T Write_1042(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90324C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1042(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9047EC))(0, , );
	}
	template <typename T = void> static T Write_1043(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA942D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1043(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA94704))(0, , );
	}
	template <typename T = void> static T Write_1044(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA94A90))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1044(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA94D70))(0, , );
	}
	template <typename T = void> static T Write_1045(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA95050))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1045(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA95D80))(0, , );
	}
	template <typename T = void> static T Write_1046(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA96DF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1046(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA970D4))(0, , );
	}
	template <typename T = void> static T Write_1047(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9ACF18))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1047(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AE1F8))(0, , );
	}
	template <typename T = void> static T Write_1048(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA24A20))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1048(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA251C4))(0, , );
	}
	template <typename T = void> static T Write_1049(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA973B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1049(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA97718))(0, , );
	}
	template <typename T = void> static T Write_1050(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA97ABC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1050(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA97D7C))(0, , );
	}
	template <typename T = void> static T Write_1051(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA98060))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1051(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA98320))(0, , );
	}
	template <typename T = void> static T Write_1052(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x886774))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1052(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x887254))(0, , );
	}
	template <typename T = void> static T Write_1053(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA98604))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1053(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA98960))(0, , );
	}
	template <typename T = void> static T Write_1054(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x889330))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1054(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x889CC4))(0, , );
	}
	template <typename T = void> static T Write_1055(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA98CF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1055(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA98FB0))(0, , );
	}
	template <typename T = void> static T Write_1056(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA99294))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1056(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA995E4))(0, , );
	}
	template <typename T = void> static T Write_1057(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA99988))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1057(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA99D70))(0, , );
	}
	template <typename T = void> static T Write_1058(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9A1D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1058(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9A8CC))(0, , );
	}
	template <typename T = void> static T Write_1059(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9A568))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1059(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9AD08))(0, , );
	}
	template <typename T = void> static T Write_1060(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9B0AC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1060(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9B3FC))(0, , );
	}
	template <typename T = void> static T Write_1061(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9B7A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1061(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9BA88))(0, , );
	}
	template <typename T = void> static T Write_1062(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9BD78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1062(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9D284))(0, , );
	}
	template <typename T = void> static T Write_1063(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x945DA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1063(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x946698))(0, , );
	}
	template <typename T = void> static T Write_1064(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9EE0C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1064(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9F54C))(0, , );
	}
	template <typename T = void> static T Write_1065(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA9FE68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1065(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA1198))(0, , );
	}
	template <typename T = void> static T Write_1066(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA2904))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1066(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA2BC4))(0, , );
	}
	template <typename T = void> static T Write_1067(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA2EA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1067(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA3168))(0, , );
	}
	template <typename T = void> static T Write_1068(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94738C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1068(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x947FC8))(0, , );
	}
	template <typename T = void> static T Write_1069(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA344C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1069(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA3A14))(0, , );
	}
	template <typename T = void> static T Write_1070(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA4130))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1070(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA4594))(0, , );
	}
	template <typename T = void> static T Write_1071(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA4B34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1071(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA4DF4))(0, , );
	}
	template <typename T = void> static T Write_1072(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA50D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1072(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA5398))(0, , );
	}
	template <typename T = void> static T Write_1073(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AE0FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1073(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8AF14C))(0, , );
	}
	template <typename T = void> static T Write_1074(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA69A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1074(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA77AC))(0, , );
	}
	template <typename T = void> static T Write_1075(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x802498))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1075(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x808CB8))(0, , );
	}
	template <typename T = void> static T Write_1076(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB06F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1076(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB0C98))(0, , );
	}
	template <typename T = void> static T Write_1077(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB1228))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1077(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB15EC))(0, , );
	}
	template <typename T = void> static T Write_1078(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB197C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1078(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB1CB8))(0, , );
	}
	template <typename T = void> static T Write_1079(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x994710))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1079(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9953E0))(0, , );
	}
	template <typename T = void> static T Write_1080(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA9688))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1080(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAD48C))(0, , );
	}
	template <typename T = void> static T Write_1081(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA93C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1081(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAD1A8))(0, , );
	}
	template <typename T = void> static T Write_1082(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB2054))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1082(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB238C))(0, , );
	}
	template <typename T = void> static T Write_1083(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA7140))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1083(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA819C))(0, , );
	}
	template <typename T = void> static T Write_1084(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AD41C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1084(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9AE85C))(0, , );
	}
	template <typename T = void> static T Write_1085(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA0C4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1085(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA22A0))(0, , );
	}
	template <typename T = void> static T Write_1086(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB2728))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1086(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB2ABC))(0, , );
	}
	template <typename T = void> static T Write_1087(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB2EF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1087(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB31D8))(0, , );
	}
	template <typename T = void> static T Write_1088(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB34B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1088(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB3A78))(0, , );
	}
	template <typename T = void> static T Write_1089(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB40F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1089(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB4390))(0, , );
	}
	template <typename T = void> static T Write_1090(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89A828))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1090(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89B910))(0, , );
	}
	template <typename T = void> static T Write_1091(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB4720))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1091(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB4B64))(0, , );
	}
	template <typename T = void> static T Write_1092(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89A548))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1092(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89B630))(0, , );
	}
	template <typename T = void> static T Write_1093(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A40E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1093(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A99D0))(0, , );
	}
	template <typename T = void> static T Write_1094(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB5114))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1094(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB5380))(0, , );
	}
	template <typename T = void> static T Write_1095(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB55BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1095(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB59A4))(0, , );
	}
	template <typename T = void> static T Write_1096(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB5E74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1096(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB624C))(0, , );
	}
	template <typename T = void> static T Write_1097(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91283C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1097(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x913634))(0, , );
	}
	template <typename T = void> static T Write_1098(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89D494))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1098(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89DDE0))(0, , );
	}
	template <typename T = void> static T Write_1099(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA477C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1099(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA48FCC))(0, , );
	}
	template <typename T = void> static T Write_1100(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB66E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1100(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB69C4))(0, , );
	}
	template <typename T = void> static T Write_1101(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B544C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1101(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B6430))(0, , );
	}
	template <typename T = void> static T Write_1102(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB6CA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1102(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB7314))(0, , );
	}
	template <typename T = void> static T Write_1103(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB7A08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1103(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB7DE0))(0, , );
	}
	template <typename T = void> static T Write_1104(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB8234))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1104(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB8498))(0, , );
	}
	template <typename T = void> static T Write_1105(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BDB44))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1105(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BFEF4))(0, , );
	}
	template <typename T = void> static T Write_1106(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB8778))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1106(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB8AD4))(0, , );
	}
	template <typename T = void> static T Write_1107(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B7A50))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1107(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B9648))(0, , );
	}
	template <typename T = void> static T Write_1108(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8B8408))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1108(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BA074))(0, , );
	}
	template <typename T = void> static T Write_1109(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x89FD48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1109(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A0B18))(0, , );
	}
	template <typename T = void> static T Write_1110(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BC1B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1110(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BCA60))(0, , );
	}
	template <typename T = void> static T Write_1111(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x873E30))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1111(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x875008))(0, , );
	}
	template <typename T = void> static T Write_1112(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x819C98))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1112(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x81A384))(0, , );
	}
	template <typename T = void> static T Write_1113(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB8E64))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1113(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB94DC))(0, , );
	}
	template <typename T = void> static T Write_1114(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAC020))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1114(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB0360))(0, , );
	}
	template <typename T = void> static T Write_1115(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9D41F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1115(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DCB8C))(0, , );
	}
	template <typename T = void> static T Write_1116(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EC8A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1116(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EE6F4))(0, , );
	}
	template <typename T = void> static T Write_1117(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8BEC40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1117(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C0248))(0, , );
	}
	template <typename T = void> static T Write_1118(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB9BC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1118(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAB9F84))(0, , );
	}
	template <typename T = void> static T Write_1119(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABA314))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1119(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABA6EC))(0, , );
	}
	template <typename T = void> static T Write_1120(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABAB40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1120(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABADA8))(0, , );
	}
	template <typename T = void> static T Write_1121(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABB098))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1121(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABB50C))(0, , );
	}
	template <typename T = void> static T Write_1122(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABBAB0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1122(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABBDEC))(0, , );
	}
	template <typename T = void> static T Write_1123(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABC188))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1123(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABC4D4))(0, , );
	}
	template <typename T = void> static T Write_1124(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABC878))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1124(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABCC20))(0, , );
	}
	template <typename T = void> static T Write_1125(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABD074))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1125(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABD2E0))(0, , );
	}
	template <typename T = void> static T Write_1126(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABD51C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1126(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABD784))(0, , );
	}
	template <typename T = void> static T Write_1127(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABDA74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1127(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABDE14))(0, , );
	}
	template <typename T = void> static T Write_1128(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABE264))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1128(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABE4D0))(0, , );
	}
	template <typename T = void> static T Write_1129(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABE70C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1129(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABE9E4))(0, , );
	}
	template <typename T = void> static T Write_1130(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABECD4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1130(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABEFAC))(0, , );
	}
	template <typename T = void> static T Write_1131(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABF294))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1131(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABF474))(0, , );
	}
	template <typename T = void> static T Write_1132(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABF5F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1132(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABFA34))(0, , );
	}
	template <typename T = void> static T Write_1133(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xABFE80))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1133(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC0060))(0, , );
	}
	template <typename T = void> static T Write_1134(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC01E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1134(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC0614))(0, , );
	}
	template <typename T = void> static T Write_1135(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC0A60))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1135(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC0C40))(0, , );
	}
	template <typename T = void> static T Write_1136(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC0DC0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1136(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC126C))(0, , );
	}
	template <typename T = void> static T Write_1137(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC1770))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1137(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC1950))(0, , );
	}
	template <typename T = void> static T Write_1138(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC1AD0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1138(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC1DA0))(0, , );
	}
	template <typename T = void> static T Write_1139(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC2080))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1139(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC2740))(0, , );
	}
	template <typename T = void> static T Write_1140(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA13878))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1140(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA176F4))(0, , );
	}
	template <typename T = void> static T Write_1141(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C5B7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1141(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C6DC8))(0, , );
	}
	template <typename T = void> static T Write_1142(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6919C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1142(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6A574))(0, , );
	}
	template <typename T = void> static T Write_1143(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D9508))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1143(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8DB8A0))(0, , );
	}
	template <typename T = void> static T Write_1144(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9521FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1144(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x954CD8))(0, , );
	}
	template <typename T = void> static T Write_1145(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE63E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1145(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE664C))(0, , );
	}
	template <typename T = void> static T Write_1146(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE693C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1146(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE6D00))(0, , );
	}
	template <typename T = void> static T Write_1147(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE715C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1147(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE75B8))(0, , );
	}
	template <typename T = void> static T Write_1148(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE7AC8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1148(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE8174))(0, , );
	}
	template <typename T = void> static T Write_1149(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE8920))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1149(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE8B8C))(0, , );
	}
	template <typename T = void> static T Write_1150(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE8DC8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1150(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE9104))(0, , );
	}
	template <typename T = void> static T Write_1151(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D6BC8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1151(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D7DA4))(0, , );
	}
	template <typename T = void> static T Write_1152(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83DB78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1152(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83EAF4))(0, , );
	}
	template <typename T = void> static T Write_1153(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE94A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1153(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE98E4))(0, , );
	}
	template <typename T = void> static T Write_1154(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE9D2C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1154(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEA13C))(0, , );
	}
	template <typename T = void> static T Write_1155(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEA62C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1155(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEAB40))(0, , );
	}
	template <typename T = void> static T Write_1156(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEB0EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1156(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEB4C4))(0, , );
	}
	template <typename T = void> static T Write_1157(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B07F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1157(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B1DC4))(0, , );
	}
	template <typename T = void> static T Write_1158(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C5660))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1158(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C60F4))(0, , );
	}
	template <typename T = void> static T Write_1159(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAED320))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1159(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEDE10))(0, , );
	}
	template <typename T = void> static T Write_1160(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x928E20))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1160(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92ADF0))(0, , );
	}
	template <typename T = void> static T Write_1161(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91E548))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1161(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x91FD54))(0, , );
	}
	template <typename T = void> static T Write_1162(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x936A6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1162(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9372AC))(0, , );
	}
	template <typename T = void> static T Write_1163(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90BCB0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1163(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90DE9C))(0, , );
	}
	template <typename T = void> static T Write_1164(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEEA08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1164(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEED34))(0, , );
	}
	template <typename T = void> static T Write_1165(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAED9A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1165(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEE504))(0, , );
	}
	template <typename T = void> static T Write_1166(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEF0D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1166(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEF5A4))(0, , );
	}
	template <typename T = void> static T Write_1167(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B3FB8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1167(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9B4F8C))(0, , );
	}
	template <typename T = void> static T Write_1168(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEFB5C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1168(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEFFAC))(0, , );
	}
	template <typename T = void> static T Write_1169(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF04B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1169(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF08F0))(0, , );
	}
	template <typename T = void> static T Write_1170(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C6CD0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1170(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C7550))(0, , );
	}
	template <typename T = void> static T Write_1171(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF0D3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1171(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF1274))(0, , );
	}
	template <typename T = void> static T Write_1172(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF183C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1172(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF1E68))(0, , );
	}
	template <typename T = void> static T Write_1173(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF2570))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1173(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF27D4))(0, , );
	}
	template <typename T = void> static T Write_1174(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF2A00))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1174(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF2BE0))(0, , );
	}
	template <typename T = void> static T Write_1175(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF2D60))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1175(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF3048))(0, , );
	}
	template <typename T = void> static T Write_1176(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF3330))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1176(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF3594))(0, , );
	}
	template <typename T = void> static T Write_1177(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF37C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1177(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF3DEC))(0, , );
	}
	template <typename T = void> static T Write_1178(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF44F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1178(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF4758))(0, , );
	}
	template <typename T = void> static T Write_1179(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF4984))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1179(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF4CE4))(0, , );
	}
	template <typename T = void> static T Write_1180(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF5088))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1180(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF5268))(0, , );
	}
	template <typename T = void> static T Write_1181(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF53E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1181(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF564C))(0, , );
	}
	template <typename T = void> static T Write_1182(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF5878))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1182(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF5B60))(0, , );
	}
	template <typename T = void> static T Write_1183(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF5E48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1183(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF6130))(0, , );
	}
	template <typename T = void> static T Write_1184(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF6418))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1184(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF6BD4))(0, , );
	}
	template <typename T = void> static T Write_1185(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF74F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1185(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF7C38))(0, , );
	}
	template <typename T = void> static T Write_1186(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF84AC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1186(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF8718))(0, , );
	}
	template <typename T = void> static T Write_1187(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF8954))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1187(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF8BB8))(0, , );
	}
	template <typename T = void> static T Write_1188(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9651B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1188(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x965E1C))(0, , );
	}
	template <typename T = void> static T Write_1189(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96FD08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1189(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x973224))(0, , );
	}
	template <typename T = void> static T Write_1190(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96CB10))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1190(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x96DB04))(0, , );
	}
	template <typename T = void> static T Write_1191(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF8DE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1191(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF90CC))(0, , );
	}
	template <typename T = void> static T Write_1192(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF93B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1192(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAF9BE8))(0, , );
	}
	template <typename T = void> static T Write_1193(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFA698))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1193(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFAA88))(0, , );
	}
	template <typename T = void> static T Write_1194(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x95F908))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1194(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9604D0))(0, , );
	}
	template <typename T = void> static T Write_1195(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9710E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1195(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x974BB4))(0, , );
	}
	template <typename T = void> static T Write_1196(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97827C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1196(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9794BC))(0, , );
	}
	template <typename T = void> static T Write_1197(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x980760))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1197(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x980F30))(0, , );
	}
	template <typename T = void> static T Write_1198(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFAEF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1198(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFB5D8))(0, , );
	}
	template <typename T = void> static T Write_1199(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFBBFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1199(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFC130))(0, , );
	}
	template <typename T = void> static T Write_1200(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x988040))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1200(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x98925C))(0, , );
	}
	template <typename T = void> static T Write_1201(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFC830))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1201(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFCB10))(0, , );
	}
	template <typename T = void> static T Write_1202(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFCDF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1202(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFD0D0))(0, , );
	}
	template <typename T = void> static T Write_1203(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9D4B88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1203(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DD6BC))(0, , );
	}
	template <typename T = void> static T Write_1204(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFD3B0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1204(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFD798))(0, , );
	}
	template <typename T = void> static T Write_1205(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFDC68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1205(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFE0A0))(0, , );
	}
	template <typename T = void> static T Write_1206(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFE5A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1206(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFE7D0))(0, , );
	}
	template <typename T = void> static T Write_1207(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFE9FC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1207(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFED54))(0, , );
	}
	template <typename T = void> static T Write_1208(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFF108))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1208(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFF330))(0, , );
	}
	template <typename T = void> static T Write_1209(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFF55C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1209(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAFFA94))(0, , );
	}
	template <typename T = void> static T Write_1210(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0005C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1210(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB004AC))(0, , );
	}
	template <typename T = void> static T Write_1211(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAAA40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1211(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAEBBC))(0, , );
	}
	template <typename T = void> static T Write_1212(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C02E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1212(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C102C))(0, , );
	}
	template <typename T = void> static T Write_1213(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BB4A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1213(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9BC554))(0, , );
	}
	template <typename T = void> static T Write_1214(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB009B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1214(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB00BE4))(0, , );
	}
	template <typename T = void> static T Write_1215(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB00E20))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1215(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB010EC))(0, , );
	}
	template <typename T = void> static T Write_1216(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AB820))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1216(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7AC5D4))(0, , );
	}
	template <typename T = void> static T Write_1217(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA9D78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1217(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAADC58))(0, , );
	}
	template <typename T = void> static T Write_1218(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x777CFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1218(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77869C))(0, , );
	}
	template <typename T = void> static T Write_1219(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BE750))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1219(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C0E54))(0, , );
	}
	template <typename T = void> static T Write_1220(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F61E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1220(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F6AAC))(0, , );
	}
	template <typename T = void> static T Write_1221(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB013CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1221(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB016B4))(0, , );
	}
	template <typename T = void> static T Write_1222(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB019F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1222(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB01D54))(0, , );
	}
	template <typename T = void> static T Write_1223(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C5FBC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1223(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9C7214))(0, , );
	}
	template <typename T = void> static T Write_1224(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9D3614))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1224(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DBC7C))(0, , );
	}
	template <typename T = void> static T Write_1225(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C8604))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1225(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C8E00))(0, , );
	}
	template <typename T = void> static T Write_1226(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB02D78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1226(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB03058))(0, , );
	}
	template <typename T = void> static T Write_1227(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9D3144))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1227(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DB6C4))(0, , );
	}
	template <typename T = void> static T Write_1228(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8C9858))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1228(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CA0D8))(0, , );
	}
	template <typename T = void> static T Write_1229(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76F9A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1229(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x770190))(0, , );
	}
	template <typename T = void> static T Write_1230(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB03CF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1230(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB040B4))(0, , );
	}
	template <typename T = void> static T Write_1231(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB04444))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1231(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB04724))(0, , );
	}
	template <typename T = void> static T Write_1232(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A27E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1232(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A7CA4))(0, , );
	}
	template <typename T = void> static T Write_1233(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB04A04))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1233(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB04DDC))(0, , );
	}
	template <typename T = void> static T Write_1234(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA625E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1234(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA652D8))(0, , );
	}
	template <typename T = void> static T Write_1235(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CF71C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1235(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D2480))(0, , );
	}
	template <typename T = void> static T Write_1236(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB05230))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1236(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB05EE4))(0, , );
	}
	template <typename T = void> static T Write_1237(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA8960))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1237(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAC37C))(0, , );
	}
	template <typename T = void> static T Write_1238(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x990B48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1238(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99232C))(0, , );
	}
	template <typename T = void> static T Write_1239(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB057A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1239(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB06528))(0, , );
	}
	template <typename T = void> static T Write_1240(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9EAD90))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1240(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9F0CE0))(0, , );
	}
	template <typename T = void> static T Write_1241(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83C2F0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1241(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83CF38))(0, , );
	}
	template <typename T = void> static T Write_1242(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB06D58))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1242(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB07278))(0, , );
	}
	template <typename T = void> static T Write_1243(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB07840))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1243(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB07C78))(0, , );
	}
	template <typename T = void> static T Write_1244(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7864E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1244(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x787020))(0, , );
	}
	template <typename T = void> static T Write_1245(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA04AD0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1245(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA06460))(0, , );
	}
	template <typename T = void> static T Write_1246(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB080D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1246(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB08D88))(0, , );
	}
	template <typename T = void> static T Write_1247(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0BE8C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1247(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0C7E8))(0, , );
	}
	template <typename T = void> static T Write_1248(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0D2A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1248(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0DD94))(0, , );
	}
	template <typename T = void> static T Write_1249(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB09F70))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1249(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0ABC8))(0, , );
	}
	template <typename T = void> static T Write_1250(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0C428))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1250(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0CE50))(0, , );
	}
	template <typename T = void> static T Write_1251(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0D668))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1251(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0E124))(0, , );
	}
	template <typename T = void> static T Write_1252(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0EA30))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1252(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0F304))(0, , );
	}
	template <typename T = void> static T Write_1253(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB0FD04))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1253(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB100C8))(0, , );
	}
	template <typename T = void> static T Write_1254(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0947C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1254(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA0A51C))(0, , );
	}
	template <typename T = void> static T Write_1255(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB10458))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1255(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB10AD8))(0, , );
	}
	template <typename T = void> static T Write_1256(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9E9284))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1256(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9EEE60))(0, , );
	}
	template <typename T = void> static T Write_1257(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CE7A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1257(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D1084))(0, , );
	}
	template <typename T = void> static T Write_1258(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DF59C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1258(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9E209C))(0, , );
	}
	template <typename T = void> static T Write_1259(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB11FA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1259(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB122DC))(0, , );
	}
	template <typename T = void> static T Write_1260(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA2073C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1260(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA21184))(0, , );
	}
	template <typename T = void> static T Write_1261(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x860584))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1261(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x860C80))(0, , );
	}
	template <typename T = void> static T Write_1262(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB12678))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1262(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB12F08))(0, , );
	}
	template <typename T = void> static T Write_1263(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB12CA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1263(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB136B4))(0, , );
	}
	template <typename T = void> static T Write_1264(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94D128))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1264(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94E4D0))(0, , );
	}
	template <typename T = void> static T Write_1265(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB138E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1265(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB14814))(0, , );
	}
	template <typename T = void> static T Write_1266(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB13E88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1266(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB14DA0))(0, , );
	}
	template <typename T = void> static T Write_1267(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB142C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1267(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB151EC))(0, , );
	}
	template <typename T = void> static T Write_1268(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA23738))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1268(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA23EE8))(0, , );
	}
	template <typename T = void> static T Write_1269(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76A824))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1269(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x76BB78))(0, , );
	}
	template <typename T = void> static T Write_1270(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x922ADC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1270(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x924348))(0, , );
	}
	template <typename T = void> static T Write_1271(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB15850))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1271(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB15C60))(0, , );
	}
	template <typename T = void> static T Write_1272(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB16150))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1272(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB16A78))(0, , );
	}
	template <typename T = void> static T Write_1273(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC2FA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1273(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC33FC))(0, , );
	}
	template <typename T = void> static T Write_1274(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB17648))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1274(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB17928))(0, , );
	}
	template <typename T = void> static T Write_1275(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB17C08))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1275(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1805C))(0, , );
	}
	template <typename T = void> static T Write_1276(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7ED240))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1276(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EF260))(0, , );
	}
	template <typename T = void> static T Write_1277(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA9A1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1277(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAD8C8))(0, , );
	}
	template <typename T = void> static T Write_1278(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB18564))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1278(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1893C))(0, , );
	}
	template <typename T = void> static T Write_1279(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F308C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1279(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F48D0))(0, , );
	}
	template <typename T = void> static T Write_1280(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB18DD4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1280(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB19038))(0, , );
	}
	template <typename T = void> static T Write_1281(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB19264))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1281(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB194C8))(0, , );
	}
	template <typename T = void> static T Write_1282(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB197A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1282(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB19A90))(0, , );
	}
	template <typename T = void> static T Write_1283(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB19D80))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1283(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1A060))(0, , );
	}
	template <typename T = void> static T Write_1284(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A74CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1284(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A7C9C))(0, , );
	}
	template <typename T = void> static T Write_1285(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1A340))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1285(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1B64C))(0, , );
	}
	template <typename T = void> static T Write_1286(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1C9C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1286(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1CD84))(0, , );
	}
	template <typename T = void> static T Write_1287(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x862AE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1287(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8632B8))(0, , );
	}
	template <typename T = void> static T Write_1288(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1D114))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1288(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1E520))(0, , );
	}
	template <typename T = void> static T Write_1289(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8160DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1289(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x816CD8))(0, , );
	}
	template <typename T = void> static T Write_1290(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2110C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1290(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB21480))(0, , );
	}
	template <typename T = void> static T Write_1291(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A5BA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1291(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A6594))(0, , );
	}
	template <typename T = void> static T Write_1292(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB21810))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1292(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB22AF4))(0, , );
	}
	template <typename T = void> static T Write_1293(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA28CA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1293(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA29544))(0, , );
	}
	template <typename T = void> static T Write_1294(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x801A54))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1294(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x808038))(0, , );
	}
	template <typename T = void> static T Write_1295(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC4740))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1295(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAD38E4))(0, , );
	}
	template <typename T = void> static T Write_1296(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90ABA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1296(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90B2D4))(0, , );
	}
	template <typename T = void> static T Write_1297(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2E690))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1297(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2E9D4))(0, , );
	}
	template <typename T = void> static T Write_1298(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E6D30))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1298(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E760C))(0, , );
	}
	template <typename T = void> static T Write_1299(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2751C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1299(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2C804))(0, , );
	}
	template <typename T = void> static T Write_1300(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FAAC4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1300(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FB714))(0, , );
	}
	template <typename T = void> static T Write_1301(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA101CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1301(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA10FF8))(0, , );
	}
	template <typename T = void> static T Write_1302(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x935A6C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1302(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9361C4))(0, , );
	}
	template <typename T = void> static T Write_1303(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB283C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1303(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2D9CC))(0, , );
	}
	template <typename T = void> static T Write_1304(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79B37C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1304(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79E910))(0, , );
	}
	template <typename T = void> static T Write_1305(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB271A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1305(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2C474))(0, , );
	}
	template <typename T = void> static T Write_1306(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9D2CA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1306(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DB1D8))(0, , );
	}
	template <typename T = void> static T Write_1307(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2ED84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1307(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2F1B8))(0, , );
	}
	template <typename T = void> static T Write_1308(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2F6BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1308(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2FAF4))(0, , );
	}
	template <typename T = void> static T Write_1309(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2862C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1309(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2DBF8))(0, , );
	}
	template <typename T = void> static T Write_1310(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7D6A48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1310(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7DB790))(0, , );
	}
	template <typename T = void> static T Write_1311(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1DC78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1311(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1F250))(0, , );
	}
	template <typename T = void> static T Write_1312(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2FF4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1312(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB31224))(0, , );
	}
	template <typename T = void> static T Write_1313(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3256C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1313(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB328D0))(0, , );
	}
	template <typename T = void> static T Write_1314(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA83978))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1314(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA8412C))(0, , );
	}
	template <typename T = void> static T Write_1315(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB32C74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1315(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB337D8))(0, , );
	}
	template <typename T = void> static T Write_1316(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C5D78))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1316(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C8510))(0, , );
	}
	template <typename T = void> static T Write_1317(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F0A30))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1317(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F16D4))(0, , );
	}
	template <typename T = void> static T Write_1318(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB34508))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1318(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB34864))(0, , );
	}
	template <typename T = void> static T Write_1319(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A4794))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1319(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A9D84))(0, , );
	}
	template <typename T = void> static T Write_1320(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x893084))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1320(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x893D84))(0, , );
	}
	template <typename T = void> static T Write_1321(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB34BF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1321(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB34F48))(0, , );
	}
	template <typename T = void> static T Write_1322(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F3800))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1322(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7F418C))(0, , );
	}
	template <typename T = void> static T Write_1323(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB27E00))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1323(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2D2BC))(0, , );
	}
	template <typename T = void> static T Write_1324(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB20198))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1324(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB20C10))(0, , );
	}
	template <typename T = void> static T Write_1325(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x801F8C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1325(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x808600))(0, , );
	}
	template <typename T = void> static T Write_1326(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8D9F5C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1326(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8DC638))(0, , );
	}
	template <typename T = void> static T Write_1327(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB020E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1327(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB02638))(0, , );
	}
	template <typename T = void> static T Write_1328(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA30AE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1328(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA318DC))(0, , );
	}
	template <typename T = void> static T Write_1329(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA58A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1329(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA61EC))(0, , );
	}
	template <typename T = void> static T Write_1330(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x794854))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1330(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x796454))(0, , );
	}
	template <typename T = void> static T Write_1331(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB35500))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1331(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB35938))(0, , );
	}
	template <typename T = void> static T Write_1332(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FE998))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1332(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9FF554))(0, , );
	}
	template <typename T = void> static T Write_1333(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEB928))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1333(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAEC398))(0, , );
	}
	template <typename T = void> static T Write_1334(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B35E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1334(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7B3D10))(0, , );
	}
	template <typename T = void> static T Write_1335(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB35D90))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1335(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB36358))(0, , );
	}
	template <typename T = void> static T Write_1336(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB36A68))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1336(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB36E2C))(0, , );
	}
	template <typename T = void> static T Write_1337(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB371C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1337(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB37518))(0, , );
	}
	template <typename T = void> static T Write_1338(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB378A8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1338(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB38218))(0, , );
	}
	template <typename T = void> static T Write_1339(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB37F38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1339(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB38908))(0, , );
	}
	template <typename T = void> static T Write_1340(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8439B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1340(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x844688))(0, , );
	}
	template <typename T = void> static T Write_1341(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB38BE8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1341(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB38ED0))(0, , );
	}
	template <typename T = void> static T Write_1342(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA34FF0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1342(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA35A94))(0, , );
	}
	template <typename T = void> static T Write_1343(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB391B0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1343(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB39590))(0, , );
	}
	template <typename T = void> static T Write_1344(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x949C7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1344(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94A5E4))(0, , );
	}
	template <typename T = void> static T Write_1345(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA567C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1345(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAA5FC0))(0, , );
	}
	template <typename T = void> static T Write_1346(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA36C88))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1346(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA37A4C))(0, , );
	}
	template <typename T = void> static T Write_1347(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA39BE0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1347(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA3AE94))(0, , );
	}
	template <typename T = void> static T Write_1348(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99B508))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1348(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x99C9D0))(0, , );
	}
	template <typename T = void> static T Write_1349(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94B630))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1349(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x94C144))(0, , );
	}
	template <typename T = void> static T Write_1350(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92F684))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1350(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x92FFA0))(0, , );
	}
	template <typename T = void> static T Write_1351(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E8394))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1351(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E9E5C))(0, , );
	}
	template <typename T = void> static T Write_1352(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA370E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1352(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA37FE4))(0, , );
	}
	template <typename T = void> static T Write_1353(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A8CE8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1353(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9A9614))(0, , );
	}
	template <typename T = void> static T Write_1354(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB399EC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1354(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB39DB0))(0, , );
	}
	template <typename T = void> static T Write_1355(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB263C8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1355(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2B4BC))(0, , );
	}
	template <typename T = void> static T Write_1356(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2890C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1356(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2DED8))(0, , );
	}
	template <typename T = void> static T Write_1357(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2446C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1357(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB28EE4))(0, , );
	}
	template <typename T = void> static T Write_1358(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77A6E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1358(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77B18C))(0, , );
	}
	template <typename T = void> static T Write_1359(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x778F34))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1359(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x77966C))(0, , );
	}
	template <typename T = void> static T Write_1360(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78C3D0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1360(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x78DAF8))(0, , );
	}
	template <typename T = void> static T Write_1361(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3A140))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1361(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3A4A4))(0, , );
	}
	template <typename T = void> static T Write_1362(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1177C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1362(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB11B50))(0, , );
	}
	template <typename T = void> static T Write_1363(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3A848))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1363(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3AB54))(0, , );
	}
	template <typename T = void> static T Write_1364(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3AEE4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1364(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3B2A8))(0, , );
	}
	template <typename T = void> static T Write_1365(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3B638))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1365(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3B9F8))(0, , );
	}
	template <typename T = void> static T Write_1366(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAA760))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1366(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAE8DC))(0, , );
	}
	template <typename T = void> static T Write_1367(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x83F918))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1367(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8402C0))(0, , );
	}
	template <typename T = void> static T Write_1368(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82BDEC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1368(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82F6F4))(0, , );
	}
	template <typename T = void> static T Write_1369(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82C478))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1369(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82FDEC))(0, , );
	}
	template <typename T = void> static T Write_1370(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3C754))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1370(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3CC90))(0, , );
	}
	template <typename T = void> static T Write_1371(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82A80C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1371(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82DFF8))(0, , );
	}
	template <typename T = void> static T Write_1372(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82A2C0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1372(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82D994))(0, , );
	}
	template <typename T = void> static T Write_1373(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82B018))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1373(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x82E988))(0, , );
	}
	template <typename T = void> static T Write_1374(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3BF18))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1374(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3C2F8))(0, , );
	}
	template <typename T = void> static T Write_1375(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3D260))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1375(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3D740))(0, , );
	}
	template <typename T = void> static T Write_1376(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x833F38))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1376(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x835328))(0, , );
	}
	template <typename T = void> static T Write_1377(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CACC4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1377(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8CC32C))(0, , );
	}
	template <typename T = void> static T Write_1378(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8DEA70))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1378(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8E09F8))(0, , );
	}
	template <typename T = void> static T Write_1379(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3E630))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1379(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3E98C))(0, , );
	}
	template <typename T = void> static T Write_1380(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB111BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1380(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1149C))(0, , );
	}
	template <typename T = void> static T Write_1381(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1FC44))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1381(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB205A4))(0, , );
	}
	template <typename T = void> static T Write_1382(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3DDA4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1382(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3E1E8))(0, , );
	}
	template <typename T = void> static T Write_1383(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x849FF4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1383(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x84A258))(0, , );
	}
	template <typename T = void> static T Write_1384(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3ED1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1384(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3F030))(0, , );
	}
	template <typename T = void> static T Write_1385(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3F3D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1385(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3F798))(0, , );
	}
	template <typename T = void> static T Write_1386(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7BE214))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1386(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7C0770))(0, , );
	}
	template <typename T = void> static T Write_1387(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x991734))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1387(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9931F4))(0, , );
	}
	template <typename T = void> static T Write_1388(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3FB28))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1388(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB3FE08))(0, , );
	}
	template <typename T = void> static T Write_1389(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79C3E4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1389(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79FB18))(0, , );
	}
	template <typename T = void> static T Write_1390(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9435AC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1390(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9443DC))(0, , );
	}
	template <typename T = void> static T Write_1391(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4D2B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1391(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA4E108))(0, , );
	}
	template <typename T = void> static T Write_1392(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB400E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1392(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB409E0))(0, , );
	}
	template <typename T = void> static T Write_1393(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4134C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1393(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB41818))(0, , );
	}
	template <typename T = void> static T Write_1394(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB41EFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1394(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB422C0))(0, , );
	}
	template <typename T = void> static T Write_1395(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB404AC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1395(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB40D70))(0, , );
	}
	template <typename T = void> static T Write_1396(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB42650))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1396(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB42CE0))(0, , );
	}
	template <typename T = void> static T Write_1397(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A711C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1397(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A78FC))(0, , );
	}
	template <typename T = void> static T Write_1398(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6798C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1398(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA68218))(0, , );
	}
	template <typename T = void> static T Write_1399(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1E1C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1399(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB1F8B4))(0, , );
	}
	template <typename T = void> static T Write_1400(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6C580))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1400(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA6FB54))(0, , );
	}
	template <typename T = void> static T Write_1401(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB439A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1401(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB43CFC))(0, , );
	}
	template <typename T = void> static T Write_1402(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4408C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1402(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB442F0))(0, , );
	}
	template <typename T = void> static T Write_1403(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA62940))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1403(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA65668))(0, , );
	}
	template <typename T = void> static T Write_1404(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88DE90))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1404(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x88E830))(0, , );
	}
	template <typename T = void> static T Write_1405(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9D44D4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1405(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9DCE6C))(0, , );
	}
	template <typename T = void> static T Write_1406(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAD2CEC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1406(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE53C0))(0, , );
	}
	template <typename T = void> static T Write_1407(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7ECCF8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1407(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7EEBFC))(0, , );
	}
	template <typename T = void> static T Write_1408(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A8FDC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1408(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8A997C))(0, , );
	}
	template <typename T = void> static T Write_1409(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4451C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1409(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB44780))(0, , );
	}
	template <typename T = void> static T Write_1410(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x854540))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1410(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8580FC))(0, , );
	}
	template <typename T = void> static T Write_1411(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8534E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1411(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x856ABC))(0, , );
	}
	template <typename T = void> static T Write_1412(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x868478))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1412(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x86A66C))(0, , );
	}
	template <typename T = void> static T Write_1413(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB450A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1413(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB45BBC))(0, , );
	}
	template <typename T = void> static T Write_1414(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB44A60))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1414(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB45400))(0, , );
	}
	template <typename T = void> static T Write_1415(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8ECF90))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1415(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8EE694))(0, , );
	}
	template <typename T = void> static T Write_1416(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA149C4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1416(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA18DB8))(0, , );
	}
	template <typename T = void> static T Write_1417(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB45F4C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1417(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB46ECC))(0, , );
	}
	template <typename T = void> static T Write_1418(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79B754))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1418(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x79EDA8))(0, , );
	}
	template <typename T = void> static T Write_1419(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB483F8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1419(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB486D8))(0, , );
	}
	template <typename T = void> static T Write_1420(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB489B8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1420(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB48D98))(0, , );
	}
	template <typename T = void> static T Write_1421(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB491F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1421(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB495DC))(0, , );
	}
	template <typename T = void> static T Write_1422(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB49A40))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1422(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4A078))(0, , );
	}
	template <typename T = void> static T Write_1423(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB49DD4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1423(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4A4B4))(0, , );
	}
	template <typename T = void> static T Write_1424(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4A858))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1424(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4AAFC))(0, , );
	}
	template <typename T = void> static T Write_1425(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4AEA0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1425(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4B4E4))(0, , );
	}
	template <typename T = void> static T Write_1426(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4BC8C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1426(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4BF30))(0, , );
	}
	template <typename T = void> static T Write_1427(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4C2D8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1427(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4EACC))(0, , );
	}
	template <typename T = void> static T Write_1428(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB4D834))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1428(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB50464))(0, , );
	}
	template <typename T = void> static T Write_1429(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2605C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1429(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2B12C))(0, , );
	}
	template <typename T = void> static T Write_1430(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB25C84))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1430(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2ACD8))(0, , );
	}
	template <typename T = void> static T Write_1431(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8F9AB8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1431(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FA774))(0, , );
	}
	template <typename T = void> static T Write_1432(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FBA1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1432(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FC23C))(0, , );
	}
	template <typename T = void> static T Write_1433(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB51E1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1433(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB52278))(0, , );
	}
	template <typename T = void> static T Write_1434(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7712CC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1434(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x772A74))(0, , );
	}
	template <typename T = void> static T Write_1435(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A3224))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1435(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A8700))(0, , );
	}
	template <typename T = void> static T Write_1436(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A1648))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1436(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7A6A94))(0, , );
	}
	template <typename T = void> static T Write_1437(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB03338))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1437(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB03738))(0, , );
	}
	template <typename T = void> static T Write_1438(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB52788))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1438(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB53910))(0, , );
	}
	template <typename T = void> static T Write_1439(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB54C3C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1439(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5501C))(0, , );
	}
	template <typename T = void> static T Write_1440(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAD2644))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1440(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAE4C14))(0, , );
	}
	template <typename T = void> static T Write_1441(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x925978))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1441(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9270EC))(0, , );
	}
	template <typename T = void> static T Write_1442(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x852288))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1442(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x855224))(0, , );
	}
	template <typename T = void> static T Write_1443(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CA45C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1443(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9CA744))(0, , );
	}
	template <typename T = void> static T Write_1444(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB554BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1444(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB55910))(0, , );
	}
	template <typename T = void> static T Write_1445(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB433E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1445(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB436C0))(0, , );
	}
	template <typename T = void> static T Write_1446(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB308B4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1446(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB31BAC))(0, , );
	}
	template <typename T = void> static T Write_1447(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB30EC8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1447(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB321DC))(0, , );
	}
	template <typename T = void> static T Write_1448(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB25928))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1448(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2A948))(0, , );
	}
	template <typename T = void> static T Write_1449(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB55E18))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1449(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB56430))(0, , );
	}
	template <typename T = void> static T Write_1450(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FEBE8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1450(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x8FF51C))(0, , );
	}
	template <typename T = void> static T Write_1451(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB27A48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1451(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2CE74))(0, , );
	}
	template <typename T = void> static T Write_1452(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB26990))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1452(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2BBCC))(0, , );
	}
	template <typename T = void> static T Write_1453(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87B018))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1453(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x87BD20))(0, , );
	}
	template <typename T = void> static T Write_1454(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB26C70))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1454(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2BEAC))(0, , );
	}
	template <typename T = void> static T Write_1455(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB56DBC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1455(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB57194))(0, , );
	}
	template <typename T = void> static T Write_1456(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FDB10))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1456(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x7FE190))(0, , );
	}
	template <typename T = void> static T Write_1457(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x9913A0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1457(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x992DB8))(0, , );
	}
	template <typename T = void> static T Write_1458(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x901F74))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1458(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x90271C))(0, , );
	}
	template <typename T = void> static T Write_1459(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB255E0))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1459(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB2A5B8))(0, , );
	}
	template <typename T = void> static T Write_1460(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAA158))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1460(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAAE0B4))(0, , );
	}
	template <typename T = void> static T Write_1461(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB52ED8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1461(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB54184))(0, , );
	}
	template <typename T = void> static T Write_1462(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97BA7C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1462(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97C3AC))(0, , );
	}
	template <typename T = void> static T Write_1463(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB575E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1463(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB57B78))(0, , );
	}
	template <typename T = void> static T Write_1464(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97D304))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1464(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x97DBFC))(0, , );
	}
	template <typename T = void> static T Write_1465(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB581E8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1465(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB58D68))(0, , );
	}
	template <typename T = void> static T Write_1466(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC3940))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1466(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xAC3F84))(0, , );
	}
	template <typename T = void> static T Write_1467(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA956DC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1467(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xA96528))(0, , );
	}
	template <typename T = void> static T Write_1468(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB59AFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1468(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB59DDC))(0, , );
	}
	template <typename T = void> static T Write_1469(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5A0BC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1469(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5A44C))(0, , );
	}
	template <typename T = void> static T Write_1470(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5A55C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1470(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5A75C))(0, , );
	}
	template <typename T = void> static T Write_1471(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5A86C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1471(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5AA28))(0, , );
	}
	template <typename T = void> static T Write_1472(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5AB44))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1472(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5AD00))(0, , );
	}
	template <typename T = void> static T Write_1473(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5AE1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1473(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5AFD8))(0, , );
	}
	template <typename T = void> static T Write_1474(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5B0F4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1474(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5B2F4))(0, , );
	}
	template <typename T = void> static T Write_1475(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5B404))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1475(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5B854))(0, , );
	}
	template <typename T = void> static T Write_1476(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5B964))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1476(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5BB64))(0, , );
	}
	template <typename T = void> static T Write_1477(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5BC70))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1477(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5BE2C))(0, , );
	}
	template <typename T = void> static T Write_1478(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5BF48))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1478(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5C998))(0, , );
	}
	template <typename T = void> static T Write_1479(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5CAA8))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1479(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5CCA8))(0, , );
	}
	template <typename T = void> static T Write_1480(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5CDB4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1480(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5D280))(0, , );
	}
	template <typename T = void> static T Write_1481(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5D38C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1481(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5D58C))(0, , );
	}
	template <typename T = void> static T Write_1482(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5D698))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1482(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5D854))(0, , );
	}
	template <typename T = void> static T Write_1483(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5D970))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1483(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5DF7C))(0, , );
	}
	template <typename T = void> static T Write_1484(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5E088))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1484(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5E288))(0, , );
	}
	template <typename T = void> static T Write_1485(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5E394))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1485(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5E550))(0, , );
	}
	template <typename T = void> static T Write_1486(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5E66C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1486(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5E828))(0, , );
	}
	template <typename T = void> static T Write_1487(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5E944))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1487(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5EE2C))(0, , );
	}
	template <typename T = void> static T Write_1488(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5EF64))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1488(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5F120))(0, , );
	}
	template <typename T = void> static T Write_1489(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5F23C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1489(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5F43C))(0, , );
	}
	template <typename T = void> static T Write_1490(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5F54C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1490(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5F818))(0, , );
	}
	template <typename T = void> static T Write_1491(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5F924))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1491(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5FBF0))(0, , );
	}
	template <typename T = void> static T Write_1492(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5FCFC))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1492(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB5FEFC))(0, , );
	}
	template <typename T = void> static T Write_1493(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB6000C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1493(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB603AC))(0, , );
	}
	template <typename T = void> static T Write_1494(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB60504))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1494(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB60704))(0, , );
	}
	template <typename T = void> static T Write_1495(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB60810))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1495(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB60A10))(0, , );
	}
	template <typename T = void> static T Write_1496(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB60B1C))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1496(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB617C0))(0, , );
	}
	template <typename T = void> static T Write_1497(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB619A4))(0, , );
	}
	template <typename T = uintptr_t> static T Read_1497(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xB61BF0))(0, , );
	}
	template <typename T = int32_t> T GetKeyImpl(uintptr_t ) {
		return ((T (*)(CSProtoSerializer*, uintptr_t))(Il2CppBase() + 0xB61CFC))(this, );
	}
	template <typename T = void> T Serialize(int32_t , uintptr_t , uintptr_t ) {
		return ((T (*)(CSProtoSerializer*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xB9B2B0))(this, , , );
	}
	template <typename T = uintptr_t> T Deserialize(int32_t , uintptr_t , uintptr_t ) {
		return ((T (*)(CSProtoSerializer*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xBC2F44))(this, , , );
	}
	template <typename T = uintptr_t> static T _1469(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEA584))(0, , );
	}
	template <typename T = uintptr_t> static T _1470(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEA6B8))(0, , );
	}
	template <typename T = uintptr_t> static T _1471(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEA7EC))(0, , );
	}
	template <typename T = uintptr_t> static T _1472(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEA920))(0, , );
	}
	template <typename T = uintptr_t> static T _1473(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEAA54))(0, , );
	}
	template <typename T = uintptr_t> static T _1474(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEAB88))(0, , );
	}
	template <typename T = uintptr_t> static T _1475(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEACBC))(0, , );
	}
	template <typename T = uintptr_t> static T _1476(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEADF0))(0, , );
	}
	template <typename T = uintptr_t> static T _1477(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEAF24))(0, , );
	}
	template <typename T = uintptr_t> static T _1478(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB058))(0, , );
	}
	template <typename T = uintptr_t> static T _1479(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB18C))(0, , );
	}
	template <typename T = uintptr_t> static T _1480(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB2C0))(0, , );
	}
	template <typename T = uintptr_t> static T _1481(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB3F4))(0, , );
	}
	template <typename T = uintptr_t> static T _1482(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB528))(0, , );
	}
	template <typename T = uintptr_t> static T _1483(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB65C))(0, , );
	}
	template <typename T = uintptr_t> static T _1484(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB790))(0, , );
	}
	template <typename T = uintptr_t> static T _1485(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB8C4))(0, , );
	}
	template <typename T = uintptr_t> static T _1486(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEB9F8))(0, , );
	}
	template <typename T = uintptr_t> static T _1487(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEBB2C))(0, , );
	}
	template <typename T = uintptr_t> static T _1488(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEBC60))(0, , );
	}
	template <typename T = uintptr_t> static T _1489(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEBD94))(0, , );
	}
	template <typename T = uintptr_t> static T _1490(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEBEC8))(0, , );
	}
	template <typename T = uintptr_t> static T _1491(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEBFFC))(0, , );
	}
	template <typename T = uintptr_t> static T _1492(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEC130))(0, , );
	}
	template <typename T = uintptr_t> static T _1493(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEC264))(0, , );
	}
	template <typename T = uintptr_t> static T _1494(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEC398))(0, , );
	}
	template <typename T = uintptr_t> static T _1495(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEC4CC))(0, , );
	}
	template <typename T = uintptr_t> static T _1496(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEC600))(0, , );
	}
	template <typename T = uintptr_t> static T _1497(uintptr_t , uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xBEC734))(0, , );
	}

};

}
