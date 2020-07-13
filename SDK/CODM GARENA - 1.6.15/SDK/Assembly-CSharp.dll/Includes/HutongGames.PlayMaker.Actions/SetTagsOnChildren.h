#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetTagsOnChildren
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetTagsOnChildren"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& tag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& filterByComponent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& componentFilter() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetTagsOnChildren*))(Il2CppBase() + 0x502C3F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetTagsOnChildren*))(Il2CppBase() + 0x502C404))(this);
	}
	template <typename T = void> T SetTag(uintptr_t parent) {
		return ((T (*)(SetTagsOnChildren*, uintptr_t))(Il2CppBase() + 0x502C454))(this, parent);
	}
	template <typename T = void> T UpdateComponentFilter() {
		return ((T (*)(SetTagsOnChildren*))(Il2CppBase() + 0x502C9E4))(this);
	}

};

}
