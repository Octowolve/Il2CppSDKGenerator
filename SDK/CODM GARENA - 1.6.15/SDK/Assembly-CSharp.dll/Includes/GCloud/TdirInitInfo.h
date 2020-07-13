#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class TdirInitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "TdirInitInfo"));
	}

	template <typename T = Il2CppString*> T& OpenID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& EnableManualUpdate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxIdleTime() {
		return *(T*)((uintptr_t)this + 0x14);
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

	template <typename T = void> T WriteTo(uintptr_t write) {
		return ((T (*)(TdirInitInfo*, uintptr_t))(Il2CppBase() + 0x443CBA8))(this, write);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(TdirInitInfo*, uintptr_t))(Il2CppBase() + 0x443CCA0))(this, reader);
	}

};

}
