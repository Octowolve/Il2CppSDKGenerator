#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class CampSettlementData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "CampSettlementData"));
	}

	template <typename T = uintptr_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& score() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PlayerList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CaptureNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCampPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Addition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AddCampPlayerList(uintptr_t data) {
		return ((T (*)(CampSettlementData*, uintptr_t))(Il2CppBase() + 0x3B1D95C))(this, data);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(CampSettlementData*))(Il2CppBase() + 0x3B1DAB8))(this);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t b, uintptr_t c) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B1DB88))(0, b, c);
	}

};

}
