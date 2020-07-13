#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UI2DSpriteAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UI2DSpriteAnimation"));
	}

	template <typename T = int32_t> T& frameIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& framerate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ignoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& loop() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& frames() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& size() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mUnitySprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mNguiSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mUpdate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToBeginning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(UI2DSpriteAnimation*))(Il2CppBase() + 0x425D180))(this);
	}
	template <typename T = int32_t> T get_framesPerSecond() {
		return ((T (*)(UI2DSpriteAnimation*))(Il2CppBase() + 0x425D188))(this);
	}
	template <typename T = void> T set_framesPerSecond(int32_t value) {
		return ((T (*)(UI2DSpriteAnimation*, int32_t))(Il2CppBase() + 0x425D190))(this, value);
	}
	template <typename T = void> T Play() {
		return ((T (*)(UI2DSpriteAnimation*))(Il2CppBase() + 0x425D198))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(UI2DSpriteAnimation*))(Il2CppBase() + 0x425D78C))(this);
	}
	template <typename T = void> T ResetToBeginning() {
		return ((T (*)(UI2DSpriteAnimation*))(Il2CppBase() + 0x425D838))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UI2DSpriteAnimation*))(Il2CppBase() + 0x425D910))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UI2DSpriteAnimation*))(Il2CppBase() + 0x425D9B4))(this);
	}
	template <typename T = void> T UpdateSprite() {
		return ((T (*)(UI2DSpriteAnimation*))(Il2CppBase() + 0x425D2EC))(this);
	}

};

}
