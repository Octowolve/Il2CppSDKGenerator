#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class CopyByValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "CopyByValue"));
	}


	template <typename T = void> static T UnPack(uintptr_t translator, uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1D330))(0, translator, L, idx, val);
	}
	template <typename T = bool> static T Pack(uintptr_t buff, int32_t offset, Il2CppVector2 field) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppVector2))(Il2CppBase() + 0xC1D5E8))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_1(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1D704))(0, buff, offset, field);
	}
	template <typename T = void> static T UnPack_2(uintptr_t translator, uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1D938))(0, translator, L, idx, val);
	}
	template <typename T = bool> static T Pack_1(uintptr_t buff, int32_t offset, Il2CppVector3 field) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0xC1DB8C))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_3(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1DCB8))(0, buff, offset, field);
	}
	template <typename T = void> static T UnPack_4(uintptr_t translator, uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1DF24))(0, translator, L, idx, val);
	}
	template <typename T = bool> static T Pack_2(uintptr_t buff, int32_t offset, uintptr_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xC1E1F4))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_5(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1E328))(0, buff, offset, field);
	}
	template <typename T = void> static T UnPack_6(uintptr_t translator, uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1E5BC))(0, translator, L, idx, val);
	}
	template <typename T = bool> static T Pack_3(uintptr_t buff, int32_t offset, uintptr_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xC1E88C))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_7(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1E8B0))(0, buff, offset, field);
	}
	template <typename T = void> static T UnPack_8(uintptr_t translator, uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1E9F8))(0, translator, L, idx, val);
	}
	template <typename T = bool> static T Pack_4(uintptr_t buff, int32_t offset, Il2CppQuaternion field) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppQuaternion))(Il2CppBase() + 0xC1ECC8))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_9(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1ECEC))(0, buff, offset, field);
	}
	template <typename T = void> static T UnPack_10(uintptr_t translator, uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1EE34))(0, translator, L, idx, val);
	}
	template <typename T = bool> static T Pack_5(uintptr_t buff, int32_t offset, uintptr_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xC1F288))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_11(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1F334))(0, buff, offset, field);
	}
	template <typename T = void> static T UnPack_12(uintptr_t translator, uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1F4D4))(0, translator, L, idx, val);
	}
	template <typename T = bool> static T Pack_6(uintptr_t buff, int32_t offset, uintptr_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xC1F6F4))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_13(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1F7A0))(0, buff, offset, field);
	}
	template <typename T = void> static T UnPack_14(uintptr_t translator, uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1F940))(0, translator, L, idx, val);
	}
	template <typename T = bool> static T Pack_7(uintptr_t buff, int32_t offset, uintptr_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xC1FD64))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_15(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1FE00))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_8(uintptr_t buff, int32_t offset, unsigned char field) {
		return ((T (*)(void *, uintptr_t, int32_t, unsigned char))(Il2CppBase() + 0xC1FF6C))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_16(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC2007C))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_9(uintptr_t buff, int32_t offset, signed char field) {
		return ((T (*)(void *, uintptr_t, int32_t, signed char))(Il2CppBase() + 0xC2019C))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_17(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC201B8))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_10(uintptr_t buff, int32_t offset, int16_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, int16_t))(Il2CppBase() + 0xC201E8))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_18(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC202F8))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_11(uintptr_t buff, int32_t offset, uint16_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uint16_t))(Il2CppBase() + 0xC20418))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_19(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20434))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_12(uintptr_t buff, int32_t offset, int32_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xC20464))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_20(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20574))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_13(uintptr_t buff, int32_t offset, uint32_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uint32_t))(Il2CppBase() + 0xC20694))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_21(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC206AC))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_14(uintptr_t buff, int32_t offset, int64_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0xC206DC))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_22(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC207F8))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_15(uintptr_t buff, int32_t offset, uint64_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uint64_t))(Il2CppBase() + 0xC2091C))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_23(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20940))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_16(uintptr_t buff, int32_t offset, float field) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0xC20978))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_24(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20A88))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_17(uintptr_t buff, int32_t offset, double field) {
		return ((T (*)(void *, uintptr_t, int32_t, double))(Il2CppBase() + 0xC20BA8))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_25(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20CBC))(0, buff, offset, field);
	}
	template <typename T = bool> static T Pack_18(uintptr_t buff, int32_t offset, uintptr_t field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xC20DE0))(0, buff, offset, field);
	}
	template <typename T = bool> static T UnPack_26(uintptr_t buff, int32_t offset, uintptr_t* field) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC20F10))(0, buff, offset, field);
	}
	template <typename T = bool> static T IsStruct(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC21120))(0, type);
	}

};

}
