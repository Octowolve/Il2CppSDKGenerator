#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrVisualBuf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrVisualBuf"));
	}

	template <typename T = Il2CppString*> T& visualBuf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_sprintf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getVisualBuf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T sprintf(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(TdrVisualBuf*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4444F68))(this, format, args);
	}
	template <typename T = Il2CppString*> T getVisualBuf() {
		return ((T (*)(TdrVisualBuf*))(Il2CppBase() + 0x4450378))(this);
	}

};

}
