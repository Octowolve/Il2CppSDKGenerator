#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMapTopNotifyParameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMapTopNotifyParameter"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& mNotifies() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Set(uintptr_t holder, int32_t notifyValue) {
		return ((T (*)(LobbyMapTopNotifyParameter*, uintptr_t, int32_t))(Il2CppBase() + 0x36A64E8))(this, holder, notifyValue);
	}
	template <typename T = int32_t> T Get(uintptr_t holder) {
		return ((T (*)(LobbyMapTopNotifyParameter*, uintptr_t))(Il2CppBase() + 0x36A65E4))(this, holder);
	}
	template <typename T = int32_t> T get_Union() {
		return ((T (*)(LobbyMapTopNotifyParameter*))(Il2CppBase() + 0x36A739C))(this);
	}

};

}
