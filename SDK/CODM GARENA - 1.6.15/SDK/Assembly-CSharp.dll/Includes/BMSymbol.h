#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BMSymbol
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BMSymbol"));
	}

	template <typename T = Il2CppString*> T& sequence() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& spriteName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsValid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mLength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mOffsetX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mOffsetY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mAdvance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppRect> T& mUV() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkAsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Validate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_length() {
		return ((T (*)(BMSymbol*))(Il2CppBase() + 0x35BF390))(this);
	}
	template <typename T = int32_t> T get_offsetX() {
		return ((T (*)(BMSymbol*))(Il2CppBase() + 0x35BF3D0))(this);
	}
	template <typename T = int32_t> T get_offsetY() {
		return ((T (*)(BMSymbol*))(Il2CppBase() + 0x35BF3D8))(this);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(BMSymbol*))(Il2CppBase() + 0x35BF3E0))(this);
	}
	template <typename T = int32_t> T get_height() {
		return ((T (*)(BMSymbol*))(Il2CppBase() + 0x35BF3E8))(this);
	}
	template <typename T = int32_t> T get_advance() {
		return ((T (*)(BMSymbol*))(Il2CppBase() + 0x35BF3F0))(this);
	}
	template <typename T = Il2CppRect> T get_uvRect() {
		return ((T (*)(BMSymbol*))(Il2CppBase() + 0x35BF3F8))(this);
	}
	template <typename T = void> T MarkAsChanged() {
		return ((T (*)(BMSymbol*))(Il2CppBase() + 0x35BF408))(this);
	}
	template <typename T = bool> T Validate(uintptr_t atlas) {
		return ((T (*)(BMSymbol*, uintptr_t))(Il2CppBase() + 0x35BF4AC))(this, atlas);
	}

};

}
