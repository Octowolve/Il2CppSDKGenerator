#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TakeScreenshot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TakeScreenshot"));
	}

	template <typename T = uintptr_t> T& destination() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& customPath() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& filename() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& autoNumber() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& superSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& debugLog() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& screenshotCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TakeScreenshot*))(Il2CppBase() + 0x4F17314))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(TakeScreenshot*))(Il2CppBase() + 0x4F173EC))(this);
	}

};

}
