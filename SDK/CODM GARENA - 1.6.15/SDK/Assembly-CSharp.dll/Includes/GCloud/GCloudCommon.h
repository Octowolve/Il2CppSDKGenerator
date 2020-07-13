#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class GCloudCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "GCloudCommon"));
	}

	template <typename T = unsigned char> static T& MsgVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& msgSeq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& initializeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& PluginName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ABasePluginName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uint32_t> static T get_MsgSeq() {
		return ((T (*)(void *))(Il2CppBase() + 0x452FED8))(0);
	}
	template <typename T = uintptr_t> static T get_InitializeInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x452F65C))(0);
	}
	template <typename T = void> static T set_InitializeInfo(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x452F164))(0, value);
	}

};

}
