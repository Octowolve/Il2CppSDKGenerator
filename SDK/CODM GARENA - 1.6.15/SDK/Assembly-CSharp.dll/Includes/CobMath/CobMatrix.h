#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class CobMatrix
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "CobMatrix"));
	}

	template <typename T = uintptr_t> T& members() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& sDetMList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& Size() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticBuildDetM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Determinant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> T get_Size() {
		return ((T (*)(CobMatrix*))(Il2CppBase() + 0x3A26A78))(this);
	}
	template <typename T = void> T set_Size(int32_t value) {
		return ((T (*)(CobMatrix*, int32_t))(Il2CppBase() + 0x3A26A80))(this, value);
	}
	template <typename T = void> T SetMember(int32_t row, int32_t col, float param) {
		return ((T (*)(CobMatrix*, int32_t, int32_t, float))(Il2CppBase() + 0x3A26BD8))(this, row, col, param);
	}
	template <typename T = void> T SetMember_1(Il2CppArray<uintptr_t>* param) {
		return ((T (*)(CobMatrix*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A26DBC))(this, param);
	}
	template <typename T = void> T SetRow(int32_t rowIndex, Il2CppArray<uintptr_t>* param) {
		return ((T (*)(CobMatrix*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A26F58))(this, rowIndex, param);
	}
	template <typename T = void> T SetCol(int32_t colIndex, Il2CppArray<uintptr_t>* param) {
		return ((T (*)(CobMatrix*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A270F4))(this, colIndex, param);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CobMatrix*))(Il2CppBase() + 0x3A273EC))(this);
	}
	template <typename T = void> static T StaticBuildDetM(uintptr_t matrix, uintptr_t target, int32_t ignoreCol) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3A273F4))(0, matrix, target, ignoreCol);
	}
	template <typename T = float> T Determinant() {
		return ((T (*)(CobMatrix*))(Il2CppBase() + 0x3A27AF4))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(CobMatrix*))(Il2CppBase() + 0x3A27C5C))(this);
	}

};

}
