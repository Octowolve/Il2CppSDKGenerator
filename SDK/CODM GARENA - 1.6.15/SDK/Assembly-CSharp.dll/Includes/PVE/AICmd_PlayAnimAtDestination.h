#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdPlayAnimAtDestination
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_PlayAnimAtDestination"));
	}

	template <typename T = Il2CppVector3> T& m_DestPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppQuaternion> T& m_DestRotation() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_AnimName() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_AnimLength() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAbort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t param) {
		return ((T (*)(AICmdPlayAnimAtDestination*, uintptr_t))(Il2CppBase() + 0x4CEEBEC))(this, param);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdPlayAnimAtDestination*))(Il2CppBase() + 0x4CEED90))(this);
	}
	template <typename T = bool> T CanAbort() {
		return ((T (*)(AICmdPlayAnimAtDestination*))(Il2CppBase() + 0x4CEEE78))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdPlayAnimAtDestination*))(Il2CppBase() + 0x4CEEF18))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanAbort() {
		return ((T (*)(AICmdPlayAnimAtDestination*))(Il2CppBase() + 0x4CEEF20))(this);
	}

};

}
