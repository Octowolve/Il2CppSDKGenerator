#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Pay {

class PayConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Pay", "PayConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& ms_Configs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Money() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& GameCoin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ProductType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& GarenaRebateId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_productId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& PayInfoRawStringList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& m_IsInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPayInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetPayInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProductIdPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPayConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppString*> T get_ProductId() {
		return ((T (*)(PayConfig*))(Il2CppBase() + 0x16D1B74))(this);
	}
	template <typename T = void> T set_ProductId(Il2CppString* value) {
		return ((T (*)(PayConfig*, Il2CppString*))(Il2CppBase() + 0x16D20DC))(this, value);
	}
	template <typename T = uintptr_t> static T GetPayInfo(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x16D20E4))(0, id);
	}
	template <typename T = uintptr_t> static T GetPayInfo_1(Il2CppString* productId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x16D240C))(0, productId);
	}
	template <typename T = Il2CppString*> static T GetProductIdPrefix() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D1FC4))(0);
	}
	template <typename T = void> static T PrepareData() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D22C4))(0);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D2A2C))(0);
	}
	template <typename T = void> static T InitPayConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D25EC))(0);
	}

};

}
