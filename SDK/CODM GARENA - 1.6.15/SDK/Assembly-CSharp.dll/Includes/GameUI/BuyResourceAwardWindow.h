#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BuyResourceAwardWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BuyResourceAwardWindow"));
	}

	template <typename T = uintptr_t> T& critObject() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& normalObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& normalResourceSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& VIPCritNode() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& normalGainResourceLab() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& critResourceSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& critGainResourceLab() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& critLab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormalResourceSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormalGainResourceLab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCritResourceSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCritGainResourceLab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCritLab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetNormalResourceSprite(Il2CppString* inSpriteName) {
		return ((T (*)(BuyResourceAwardWindow*, Il2CppString*))(Il2CppBase() + 0x3DD946C))(this, inSpriteName);
	}
	template <typename T = void> T SetNormalGainResourceLab(int32_t inResourceNum) {
		return ((T (*)(BuyResourceAwardWindow*, int32_t))(Il2CppBase() + 0x3DD9534))(this, inResourceNum);
	}
	template <typename T = void> T SetCritResourceSprite(Il2CppString* inSpriteName) {
		return ((T (*)(BuyResourceAwardWindow*, Il2CppString*))(Il2CppBase() + 0x3DD92BC))(this, inSpriteName);
	}
	template <typename T = void> T SetCritGainResourceLab(int32_t inResourceNum) {
		return ((T (*)(BuyResourceAwardWindow*, int32_t))(Il2CppBase() + 0x3DD9384))(this, inResourceNum);
	}
	template <typename T = void> T SetCritLab(int32_t inCritNum) {
		return ((T (*)(BuyResourceAwardWindow*, int32_t))(Il2CppBase() + 0x3DD9804))(this, inCritNum);
	}

};

}
