#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoviceTip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoviceTip"));
	}

	template <typename T = float> T& x() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& y() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& z() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& pivot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& alignment() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& FontStyle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& fontSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isShowBlock() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPivot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAlignment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFontStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetData(float pX, float pY, float pZ, Il2CppArray<uintptr_t>* pDesc, int32_t pWidth, Il2CppString* pPivot, Il2CppString* pAlignment, uint32_t pFontStyle, uint32_t pFontSize, bool pIsShowBlock) {
		return ((T (*)(NoviceTip*, float, float, float, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*, Il2CppString*, uint32_t, uint32_t, bool))(Il2CppBase() + 0x3EE015C))(this, pX, pY, pZ, pDesc, pWidth, pPivot, pAlignment, pFontStyle, pFontSize, pIsShowBlock);
	}
	template <typename T = uintptr_t> T GetPivot(Il2CppString* pivot) {
		return ((T (*)(NoviceTip*, Il2CppString*))(Il2CppBase() + 0x3EE0318))(this, pivot);
	}
	template <typename T = uintptr_t> T GetAlignment(Il2CppString* alignment) {
		return ((T (*)(NoviceTip*, Il2CppString*))(Il2CppBase() + 0x3EE05C4))(this, alignment);
	}
	template <typename T = uintptr_t> T GetFontStyle(uint32_t fontStyle) {
		return ((T (*)(NoviceTip*, uint32_t))(Il2CppBase() + 0x3EE088C))(this, fontStyle);
	}

};

}
