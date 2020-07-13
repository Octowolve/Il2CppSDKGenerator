#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEnvironment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEnvironment"));
	}

	template <typename T = int32_t> static T& MAX_NB_ENVIRONMENTS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_compareByPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_compareBySelectionAlgorithm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& excludeOthers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isDefault() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = int32_t> T& m_auxBusID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& priority() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T GetAuxBusID() {
		return ((T (*)(AkEnvironment*))(Il2CppBase() + 0x48FCF40))(this);
	}
	template <typename T = void> T SetAuxBusID(int32_t in_auxBusID) {
		return ((T (*)(AkEnvironment*, int32_t))(Il2CppBase() + 0x48FCF48))(this, in_auxBusID);
	}
	template <typename T = float> T GetAuxSendValueForPosition(Il2CppVector3 in_position) {
		return ((T (*)(AkEnvironment*, Il2CppVector3))(Il2CppBase() + 0x48FCF50))(this, in_position);
	}
	template <typename T = uintptr_t> T GetCollider() {
		return ((T (*)(AkEnvironment*))(Il2CppBase() + 0x48FCF58))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkEnvironment*))(Il2CppBase() + 0x48FCF60))(this);
	}

};

}
