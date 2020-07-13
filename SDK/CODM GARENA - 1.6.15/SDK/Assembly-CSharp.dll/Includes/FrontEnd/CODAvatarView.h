#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CODAvatarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CODAvatarView"));
	}

	template <typename T = uintptr_t> T& RotTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SceneRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ViewBox() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_AvatarAnimator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_AvatarTrans() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_AvatarManagedAsset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_SocketDic() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BoxList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_CheckReadyInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_LastCheckTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTouchRotActImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTouchRotScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateTargetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AfterViewBoxAdapter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearEquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishLoadAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T get_AvatarAnimator() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x28E83D8))(this);
	}
	template <typename T = uintptr_t> T get_AvatarTrans() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x28E7158))(this);
	}
	template <typename T = uintptr_t> T get_AvatarManagedAsset() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x28F041C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x28E4F38))(this);
	}
	template <typename T = void> T SetTouchRotActImmediately(bool moveImmediately) {
		return ((T (*)(CODAvatarView*, bool))(Il2CppBase() + 0x28E4FD0))(this, moveImmediately);
	}
	template <typename T = void> T SetTouchRotScale(float scale) {
		return ((T (*)(CODAvatarView*, float))(Il2CppBase() + 0x29204DC))(this, scale);
	}
	template <typename T = void> T SetViewInfo(Il2CppVector3 offset, Il2CppVector3 size) {
		return ((T (*)(CODAvatarView*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x29205FC))(this, offset, size);
	}
	template <typename T = void> T AddBox(uintptr_t box) {
		return ((T (*)(CODAvatarView*, uintptr_t))(Il2CppBase() + 0x28F01F0))(this, box);
	}
	template <typename T = void> T RemoveBox(uintptr_t box) {
		return ((T (*)(CODAvatarView*, uintptr_t))(Il2CppBase() + 0x29213C8))(this, box);
	}
	template <typename T = void> T CalculateTargetSize() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x29207EC))(this);
	}
	template <typename T = void> T AfterViewBoxAdapter() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x28F4DA8))(this);
	}
	template <typename T = void> T ClearEquipment() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x292153C))(this);
	}
	template <typename T = void> T HideAvatar(bool destroyCache) {
		return ((T (*)(CODAvatarView*, bool))(Il2CppBase() + 0x28E5ACC))(this, destroyCache);
	}
	template <typename T = void> T SetAvatar(Il2CppString* socketName, uintptr_t trans) {
		return ((T (*)(CODAvatarView*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x29216D4))(this, socketName, trans);
	}
	template <typename T = void> T SetAvatarAnimator(uintptr_t animator) {
		return ((T (*)(CODAvatarView*, uintptr_t))(Il2CppBase() + 0x28E6BF0))(this, animator);
	}
	template <typename T = void> T SetAnimTrigger(Il2CppString* trigger) {
		return ((T (*)(CODAvatarView*, Il2CppString*))(Il2CppBase() + 0x2921CE4))(this, trigger);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x28F2490))(this);
	}
	template <typename T = void> T OnFinishLoadAll() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x28E927C))(this);
	}
	template <typename T = void> T ResetRot() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x2921E04))(this);
	}
	template <typename T = bool> T IsAllAttachmentReady() {
		return ((T (*)(CODAvatarView*))(Il2CppBase() + 0x28E9538))(this);
	}
	template <typename T = void> T OnAttachmentReady(uintptr_t attachmentShow, Il2CppList<int32_t>* basicUselessIds, Il2CppList<uintptr_t>* excludeObjList) {
		return ((T (*)(CODAvatarView*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28E7DD0))(this, attachmentShow, basicUselessIds, excludeObjList);
	}
	template <typename T = uintptr_t> T FindSocket(Il2CppString* socketName, uintptr_t root) {
		return ((T (*)(CODAvatarView*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2921ADC))(this, socketName, root);
	}

};

}
