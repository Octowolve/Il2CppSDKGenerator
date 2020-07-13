#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class PayConfInfoExtend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "PayConfInfoExtend"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& StartPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PosLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RowInFlowGrid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColumnInFlowGrid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForever() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFlashSale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRemainTimeOnSale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProductId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetProductId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetProductId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsForever(double serverTime) {
		return ((T (*)(PayConfInfoExtend*, double))(Il2CppBase() + 0x2357854))(this, serverTime);
	}
	template <typename T = bool> T IsFlashSale(double serverTime) {
		return ((T (*)(PayConfInfoExtend*, double))(Il2CppBase() + 0x2357A90))(this, serverTime);
	}
	template <typename T = int32_t> T GetRemainTimeOnSale(double serverTime) {
		return ((T (*)(PayConfInfoExtend*, double))(Il2CppBase() + 0x2357D60))(this, serverTime);
	}
	template <typename T = Il2CppString*> T GetProductId() {
		return ((T (*)(PayConfInfoExtend*))(Il2CppBase() + 0x2357EC4))(this);
	}
	template <typename T = Il2CppString*> static T GetProductId_1(uintptr_t serverData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x235806C))(0, serverData);
	}
	template <typename T = Il2CppString*> static T GetProductId_2(uintptr_t payConfInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2357F64))(0, payConfInfo);
	}

};

}
