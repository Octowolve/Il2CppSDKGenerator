#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class RemoteComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "RemoteComponent"));
	}

	template <typename T = Il2CppString*> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& instanceId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& hasEnabled() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& enabled() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fields() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& properties() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
