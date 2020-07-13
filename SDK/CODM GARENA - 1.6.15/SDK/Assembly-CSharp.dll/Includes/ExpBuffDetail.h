#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExpBuffDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpBuffDetail"));
	}

	template <typename T = uintptr_t> T& ContainerRoot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LabelCoefficient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ModeGrid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BasicExpBuffItem() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& EventExpBuffItems() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ModeTemplateItem() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ModeItems() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TemplateItem() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateModeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T SetContent(uintptr_t type, uintptr_t localPosX) {
		return ((T (*)(ExpBuffDetail*, uintptr_t, uintptr_t))(Il2CppBase() + 0x433E910))(this, type, localPosX);
	}
	template <typename T = void> T CreateModeItem(int32_t column, int32_t offset) {
		return ((T (*)(ExpBuffDetail*, int32_t, int32_t))(Il2CppBase() + 0x433F7F0))(this, column, offset);
	}
	template <typename T = void> T CreateItem(int32_t column, int32_t offset) {
		return ((T (*)(ExpBuffDetail*, int32_t, int32_t))(Il2CppBase() + 0x433FBCC))(this, column, offset);
	}

};

}
