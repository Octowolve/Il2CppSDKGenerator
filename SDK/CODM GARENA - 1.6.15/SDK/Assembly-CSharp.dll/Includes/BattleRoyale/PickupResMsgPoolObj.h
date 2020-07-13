#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class PickupResMsgPoolObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "PickupResMsgPoolObj"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloneFromData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnRecycle() {
		return ((T (*)(PickupResMsgPoolObj*))(Il2CppBase() + 0x3D60BE0))(this);
	}
	template <typename T = uint32_t> T get_ProtocolCmd() {
		return ((T (*)(PickupResMsgPoolObj*))(Il2CppBase() + 0x3D60C78))(this);
	}
	template <typename T = void> T set_ProtocolCmd(uint32_t value) {
		return ((T (*)(PickupResMsgPoolObj*, uint32_t))(Il2CppBase() + 0x3D60C80))(this, value);
	}
	template <typename T = void> T CloneFromData(uintptr_t input) {
		return ((T (*)(PickupResMsgPoolObj*, uintptr_t))(Il2CppBase() + 0x3D60C88))(this, input);
	}

};

}
