#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class PandoraDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "PandoraDataStore"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& m_PandoraPrepareList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsNeedPopPandoraSignInFace() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PandoraShowEntranceData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PandoraCurrentOpenFace() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_NeedPopPandoraCommonFaceNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsShowPandoraRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_RedNumPandoraRoot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsPandoraMediaReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsPandoraComeBackReady() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNeedPopPandoraSignInFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNeedPopPandoraCommonFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNewPandoraShowEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPandoraEntranceRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenFirstPopPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraPopPanelCLose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ReLogin() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383E5B8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_PandoraPrepareList() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383E6CC))(this);
	}
	template <typename T = void> T set_PandoraPrepareList(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(PandoraDataStore*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x383E6D4))(this, value);
	}
	template <typename T = bool> T get_IsNeedPopPandoraSignInFace() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383E6DC))(this);
	}
	template <typename T = void> T SetNeedPopPandoraSignInFace(bool need) {
		return ((T (*)(PandoraDataStore*, bool))(Il2CppBase() + 0x383E6E4))(this, need);
	}
	template <typename T = int32_t> T get_NeedPopPandoraCommonFaceNum() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383E78C))(this);
	}
	template <typename T = void> T SetNeedPopPandoraCommonFace(bool add) {
		return ((T (*)(PandoraDataStore*, bool))(Il2CppBase() + 0x383E794))(this, add);
	}
	template <typename T = bool> T get_IsShowPandoraRoot() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383E864))(this);
	}
	template <typename T = void> T set_IsShowPandoraRoot(bool value) {
		return ((T (*)(PandoraDataStore*, bool))(Il2CppBase() + 0x383E86C))(this, value);
	}
	template <typename T = int32_t> T get_RedNumPandoraRoot() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383E930))(this);
	}
	template <typename T = void> T set_RedNumPandoraRoot(int32_t value) {
		return ((T (*)(PandoraDataStore*, int32_t))(Il2CppBase() + 0x383E938))(this, value);
	}
	template <typename T = bool> T get_IsPandoraMediaReady() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383E9F4))(this);
	}
	template <typename T = void> T set_IsPandoraMediaReady(bool value) {
		return ((T (*)(PandoraDataStore*, bool))(Il2CppBase() + 0x383E9FC))(this, value);
	}
	template <typename T = bool> T get_IsPandoraComeBackReady() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383EA04))(this);
	}
	template <typename T = void> T set_IsPandoraComeBackReady(bool value) {
		return ((T (*)(PandoraDataStore*, bool))(Il2CppBase() + 0x383EA0C))(this, value);
	}
	template <typename T = void> T AddNewPandoraShowEntrance(Il2CppString* content, Il2CppString* module, Il2CppString* tab, Il2CppString* sortId, Il2CppString* showName, Il2CppString* iconUrl) {
		return ((T (*)(PandoraDataStore*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x383EA14))(this, content, module, tab, sortId, showName, iconUrl);
	}
	template <typename T = void> T SetPandoraEntranceRedPoint(Il2CppString* content, Il2CppString* module, Il2CppString* tab) {
		return ((T (*)(PandoraDataStore*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x383F0B8))(this, content, module, tab);
	}
	template <typename T = void> T OpenFirstPopPanel() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383F420))(this);
	}
	template <typename T = void> T PandoraPopPanelCLose(Il2CppString* CloseWindows) {
		return ((T (*)(PandoraDataStore*, Il2CppString*))(Il2CppBase() + 0x383F670))(this, CloseWindows);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(PandoraDataStore*))(Il2CppBase() + 0x383F8C0))(this);
	}

};

}
