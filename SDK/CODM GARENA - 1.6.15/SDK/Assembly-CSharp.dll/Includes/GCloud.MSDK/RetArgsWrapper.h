#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class RetArgsWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "RetArgsWrapper"));
	}

	template <typename T = int32_t> T& methodId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& retJson() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_MethodId() {
		return ((T (*)(RetArgsWrapper*))(Il2CppBase() + 0x46D6B40))(this);
	}
	template <typename T = Il2CppString*> T get_RetJson() {
		return ((T (*)(RetArgsWrapper*))(Il2CppBase() + 0x46D6B48))(this);
	}

};

}
