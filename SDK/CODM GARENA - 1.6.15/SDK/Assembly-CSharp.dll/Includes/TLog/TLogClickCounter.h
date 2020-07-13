#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TLog {

class TLogClickCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TLog", "TLogClickCounter"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ClickType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Attach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickForTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T Attach(uintptr_t target, int32_t index, uintptr_t clickType) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x466E548))(0, target, index, clickType);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TLogClickCounter*))(Il2CppBase() + 0x466E718))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TLogClickCounter*))(Il2CppBase() + 0x466EA80))(this);
	}
	template <typename T = void> T OnClickForTLog() {
		return ((T (*)(TLogClickCounter*))(Il2CppBase() + 0x466EC38))(this);
	}

};

}
