#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyBackGroundView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyBackGroundView"));
	}

	template <typename T = uintptr_t> T& CameraClear() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_BackgroundNetworkTexture() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_BackgroundTexture() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteTexture() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteTextureNoAdaptor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& RankModeBg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SPVPRankBg() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BRRankBg() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PVERankBg() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_ReceiveSpecialFx() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayReceiveSpecialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDisplayReceiveSpecialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadReceiveSpecialFxDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T DisplayReceiveSpecialEffect(bool display) {
		return ((T (*)(LobbyBackGroundView*, bool))(Il2CppBase() + 0x368DBD8))(this, display);
	}
	template <typename T = void> T DoDisplayReceiveSpecialEffect(bool display) {
		return ((T (*)(LobbyBackGroundView*, bool))(Il2CppBase() + 0x368E3D8))(this, display);
	}
	template <typename T = void> T OnLoadReceiveSpecialFxDone(int32_t assetID, uintptr_t parm) {
		return ((T (*)(LobbyBackGroundView*, int32_t, uintptr_t))(Il2CppBase() + 0x368E4CC))(this, assetID, parm);
	}
	template <typename T = void> T ResetTexture(Il2CppString* src) {
		return ((T (*)(LobbyBackGroundView*, Il2CppString*))(Il2CppBase() + 0x368DF64))(this, src);
	}
	template <typename T = void> T EnableCameraClear(bool bEnable) {
		return ((T (*)(LobbyBackGroundView*, bool))(Il2CppBase() + 0x368E1F4))(this, bEnable);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(LobbyBackGroundView*, float))(Il2CppBase() + 0x368E79C))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(LobbyBackGroundView*))(Il2CppBase() + 0x368EA9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LobbyBackGroundView*, float))(Il2CppBase() + 0x368EAA4))(this, P0);
	}

};

}
