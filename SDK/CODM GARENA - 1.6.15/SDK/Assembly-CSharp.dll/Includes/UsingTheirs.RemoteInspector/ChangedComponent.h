#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class ChangedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "ChangedComponent"));
	}

	template <typename T = int32_t> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& hasEnabled() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& enabled() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& field() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& property() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
