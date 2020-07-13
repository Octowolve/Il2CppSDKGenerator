#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class AudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "AudioLogic"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_pArrEventChannel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_FrontEndBGMLogic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mCurAudioLogic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mAudioLogicGameObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetEventCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RemoveEventCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B93664))(0);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AudioLogic*))(Il2CppBase() + 0x3B93534))(this);
	}
	template <typename T = void> T UnInitialize() {
		return ((T (*)(AudioLogic*))(Il2CppBase() + 0x3B937C0))(this);
	}
	template <typename T = void> T SendEvent(uintptr_t whichCate, uint32_t uiEventID, Il2CppArray<uintptr_t>* inParams) {
		return ((T (*)(AudioLogic*, uintptr_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B938B0))(this, whichCate, uiEventID, inParams);
	}
	template <typename T = void> T EnterGame(int32_t iMapID) {
		return ((T (*)(AudioLogic*, int32_t))(Il2CppBase() + 0x3B93BB8))(this, iMapID);
	}
	template <typename T = void> T LeaveGame() {
		return ((T (*)(AudioLogic*))(Il2CppBase() + 0x3B9427C))(this);
	}
	template <typename T = void> static T AddCallback(uintptr_t whichCate, uint32_t uiEventID, void* pHandler) {
		return ((T (*)(void *, uintptr_t, uint32_t, void*))(Il2CppBase() + 0x3B9447C))(0, whichCate, uiEventID, pHandler);
	}
	template <typename T = void> static T DelCallback(uintptr_t whichCate, uint32_t uiEventID) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3B94728))(0, whichCate, uiEventID);
	}
	template <typename T = void> T _SendEvent(uintptr_t whichCate, uint32_t uiEventID, Il2CppArray<uintptr_t>* inParams) {
		return ((T (*)(AudioLogic*, uintptr_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B939B8))(this, whichCate, uiEventID, inParams);
	}
	template <typename T = void> T _SetEventCallback(uintptr_t whichCate, uint32_t uiEventID, void* pHandler) {
		return ((T (*)(AudioLogic*, uintptr_t, uint32_t, void*))(Il2CppBase() + 0x3B945E8))(this, whichCate, uiEventID, pHandler);
	}
	template <typename T = void> T _RemoveEventCallback(uintptr_t whichCate, uint32_t uiEventID) {
		return ((T (*)(AudioLogic*, uintptr_t, uint32_t))(Il2CppBase() + 0x3B9487C))(this, whichCate, uiEventID);
	}

};

}
