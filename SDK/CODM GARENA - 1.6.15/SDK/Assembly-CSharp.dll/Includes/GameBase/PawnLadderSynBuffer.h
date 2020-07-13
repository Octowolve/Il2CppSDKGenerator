#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnLadderSynBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnLadderSynBuffer"));
	}

	template <typename T = unsigned char> T& stage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PawnLadderSynBuffer*, uintptr_t))(Il2CppBase() + 0x16BFC3C))(this, writer);
	}
	template <typename T = void> T Read(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PawnLadderSynBuffer*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x16BFD54))(this, bytes, position);
	}

};

}
