#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightVolumeViewItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightVolumeViewItem"));
	}

	template <typename T = int32_t> T& VolIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OccupySprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CurrentSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ConflintObj() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& RedEffectObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ChangeEffectAlpha() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ChangeEffectScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ChangeEffectSprite() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& NobodyFlag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& CaputureFlag() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ProgressBarSprite() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ConflictingBG() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& RedEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& BlueEffect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& YellowEffect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mRenderWidget() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& RenderWidgetAlpha() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& lastOccupyCamp() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mColorBlue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mColorRed() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mColorWhite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_ServerVolumeData() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_LocalVolumeData() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_GFGameInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_GFGame() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerGFVolumeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBarColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCaputureColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_RenderWidget() {
		return ((T (*)(GunFightVolumeViewItem*))(Il2CppBase() + 0x4029774))(this);
	}
	template <typename T = uintptr_t> T get_GFGameInfo() {
		return ((T (*)(GunFightVolumeViewItem*))(Il2CppBase() + 0x4029874))(this);
	}
	template <typename T = uintptr_t> T get_GFGame() {
		return ((T (*)(GunFightVolumeViewItem*))(Il2CppBase() + 0x4029980))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunFightVolumeViewItem*))(Il2CppBase() + 0x4029A8C))(this);
	}
	template <typename T = void> T SetServerGFVolumeState(uintptr_t data) {
		return ((T (*)(GunFightVolumeViewItem*, uintptr_t))(Il2CppBase() + 0x4029B60))(this, data);
	}
	template <typename T = void> T SetBarColor(uintptr_t c) {
		return ((T (*)(GunFightVolumeViewItem*, uintptr_t))(Il2CppBase() + 0x4029D04))(this, c);
	}
	template <typename T = void> T SetCaputureColor(uintptr_t c) {
		return ((T (*)(GunFightVolumeViewItem*, uintptr_t))(Il2CppBase() + 0x4029E48))(this, c);
	}

};

}
