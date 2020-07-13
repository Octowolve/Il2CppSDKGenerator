#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class UIIDCollectionRankViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "UIIDCollectionRankView_CA"));
	}

	template <typename T = uintptr_t> T& RootWidget() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LeftScrollView() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LeftSpriteBG() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& LeftButtomSprite() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& LeftTimeSprite() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& RightRoot() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& Title_Player() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& LineSprite() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& SpritePic() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& TextureLeftPic() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppString*> T& m_LeftIconUrl() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UIIDCollectionRankViewCA*))(Il2CppBase() + 0x3818F50))(this);
	}
	template <typename T = void> T SetLeftTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(UIIDCollectionRankViewCA*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3818FF4))(this, url, bSuccess, texture);
	}
	template <typename T = void> T SetLeftPic(uintptr_t activity) {
		return ((T (*)(UIIDCollectionRankViewCA*, uintptr_t))(Il2CppBase() + 0x38191A0))(this, activity);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UIIDCollectionRankViewCA*))(Il2CppBase() + 0x38196F4))(this);
	}

};

}
