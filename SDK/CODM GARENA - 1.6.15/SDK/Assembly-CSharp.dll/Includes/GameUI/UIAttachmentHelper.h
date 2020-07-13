#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIAttachmentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIAttachmentHelper"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bInit() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& PreAttachToNextAttach() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& NextAttachToPreAttach() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& PreAttachMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& NextAttachMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPreAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNextAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextAttachmentId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreAttachmentId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachmentCouple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T CheckInitialize() {
		return ((T (*)(UIAttachmentHelper*))(Il2CppBase() + 0x29C6F2C))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(UIAttachmentHelper*))(Il2CppBase() + 0x29C7014))(this);
	}
	template <typename T = bool> T IsPreAttachment(uint32_t attachId) {
		return ((T (*)(UIAttachmentHelper*, uint32_t))(Il2CppBase() + 0x29C7484))(this, attachId);
	}
	template <typename T = bool> T IsNextAttachment(uint32_t attachId) {
		return ((T (*)(UIAttachmentHelper*, uint32_t))(Il2CppBase() + 0x29C759C))(this, attachId);
	}
	template <typename T = uint32_t> T GetNextAttachmentId(uint32_t preAttachId) {
		return ((T (*)(UIAttachmentHelper*, uint32_t))(Il2CppBase() + 0x29C76B4))(this, preAttachId);
	}
	template <typename T = uint32_t> T GetPreAttachmentId(uint32_t nextAttachId) {
		return ((T (*)(UIAttachmentHelper*, uint32_t))(Il2CppBase() + 0x29C7810))(this, nextAttachId);
	}
	template <typename T = bool> T IsAttachmentCouple(uint32_t attachA, uint32_t attachB) {
		return ((T (*)(UIAttachmentHelper*, uint32_t, uint32_t))(Il2CppBase() + 0x29C796C))(this, attachA, attachB);
	}

};

}
