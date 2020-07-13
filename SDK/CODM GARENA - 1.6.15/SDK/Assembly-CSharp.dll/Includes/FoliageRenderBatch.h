#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageRenderBatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageRenderBatch"));
	}

	template <typename T = uintptr_t> T& mesh() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& renderKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& matrices() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& matricesArray() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& properties() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetActive(bool _ative) {
		return ((T (*)(FoliageRenderBatch*, bool))(Il2CppBase() + 0x3CCF788))(this, _ative);
	}
	template <typename T = void> T AddMatrix(uintptr_t _maxtrix) {
		return ((T (*)(FoliageRenderBatch*, uintptr_t))(Il2CppBase() + 0x3CD3C34))(this, _maxtrix);
	}
	template <typename T = void> T DrawBatch() {
		return ((T (*)(FoliageRenderBatch*))(Il2CppBase() + 0x3CCF970))(this);
	}

};

}
