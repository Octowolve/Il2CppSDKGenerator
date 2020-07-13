#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayGetNext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayGetNext"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& startIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& endIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& loopEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& finishedEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& currentIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& nextItemIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayGetNext*))(Il2CppBase() + 0x4F30CC4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayGetNext*))(Il2CppBase() + 0x4F30CDC))(this);
	}
	template <typename T = void> T DoGetNextItem() {
		return ((T (*)(ArrayGetNext*))(Il2CppBase() + 0x4F30D4C))(this);
	}

};

}
