#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEnvironmentPortal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEnvironmentPortal"));
	}

	template <typename T = int32_t> static T& MAX_ENVIRONMENTS_PER_PORTAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& axis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& environments() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = float> T GetAuxSendValueForPosition(Il2CppVector3 in_position, int32_t index) {
		return ((T (*)(AkEnvironmentPortal*, Il2CppVector3, int32_t))(Il2CppBase() + 0x48FD320))(this, in_position, index);
	}

};

}
