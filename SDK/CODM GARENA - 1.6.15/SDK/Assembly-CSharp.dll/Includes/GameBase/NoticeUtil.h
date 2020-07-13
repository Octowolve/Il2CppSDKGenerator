#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NoticeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NoticeUtil"));
	}

	template <typename T = Il2CppString*> static T& AppStartUpNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAppStartUpNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T ShowAppStartUpNotice() {
		return ((T (*)(void *))(Il2CppBase() + 0x19DC9CC))(0);
	}

};

}
