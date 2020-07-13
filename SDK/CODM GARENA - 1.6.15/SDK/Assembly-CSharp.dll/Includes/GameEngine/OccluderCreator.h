#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class OccluderCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "OccluderCreator"));
	}

	template <typename T = bool> T& CreateOccluderData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& UsePixelMethod() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& UseEditorOccluderStatic() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OccluderBlackList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OccluderBlackRootNodeNames() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpecifiedOccluderRootObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnDestroy() {
		return ((T (*)(OccluderCreator*))(Il2CppBase() + 0x271C728))(this);
	}

};

}
