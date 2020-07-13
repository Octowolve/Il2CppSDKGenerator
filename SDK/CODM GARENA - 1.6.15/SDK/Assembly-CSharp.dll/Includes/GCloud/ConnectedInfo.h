#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ConnectedInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ConnectedInfo"));
	}

	template <typename T = Il2CppString*> T& currentIP() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& currentServerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(ConnectedInfo*, uintptr_t))(Il2CppBase() + 0x452031C))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(ConnectedInfo*, uintptr_t))(Il2CppBase() + 0x45203F8))(this, reader);
	}

};

}
