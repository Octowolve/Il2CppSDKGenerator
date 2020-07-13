#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalBRMapMarkShowSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalBRMapMarkShowSet"));
	}

	template <typename T = uintptr_t> T& CloseRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OpenRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& OpenBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BRMapMarkShowList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<bool>*> T& AvailableInMap() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ToggleGrid() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& PanelBackground() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ShowAreaBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ShowAreaFlag() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& SHOW_AREA_KEY() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_IsOpen() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_IsShowArea() {
		return *(T*)((uintptr_t)this + 0xA9);
	}

	template <typename T = bool> T BaseCheck() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A8528))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A8774))(this);
	}
	template <typename T = void> T RegisterEventHandlers() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A8AD4))(this);
	}
	template <typename T = void> T UnRegisterEventHandlers() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A8C94))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A8E54))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A8E5C))(this);
	}
	template <typename T = void> T InitMapMarkShowListState() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A87E4))(this);
	}
	template <typename T = void> T OnOpenChange() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A8A14))(this);
	}
	template <typename T = void> T AdjustPanelBackgroundSize() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A8E7C))(this);
	}
	template <typename T = void> T OnSyncShouldShowMapMark() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A94F8))(this);
	}
	template <typename T = void> T OnOpenBtnClick() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A94FC))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A9508))(this);
	}
	template <typename T = void> T OnShowAreaBtnClick() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A9514))(this);
	}
	template <typename T = void> T InitShowArea() {
		return ((T (*)(TacticalBRMapMarkShowSet*))(Il2CppBase() + 0x29A98BC))(this);
	}
	template <typename T = void> T OnRefreshToggelArea(bool bToggle) {
		return ((T (*)(TacticalBRMapMarkShowSet*, bool))(Il2CppBase() + 0x29A95F4))(this, bToggle);
	}

};

}
