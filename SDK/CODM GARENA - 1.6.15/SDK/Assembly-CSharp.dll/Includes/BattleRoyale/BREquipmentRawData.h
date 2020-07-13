#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentRawData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentRawData"));
	}

	template <typename T = int32_t> T& PosId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Param1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BREquipmentRawData*))(Il2CppBase() + 0x18F1EDC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(BREquipmentRawData*))(Il2CppBase() + 0x18F1F9C))(this);
	}

};

}
