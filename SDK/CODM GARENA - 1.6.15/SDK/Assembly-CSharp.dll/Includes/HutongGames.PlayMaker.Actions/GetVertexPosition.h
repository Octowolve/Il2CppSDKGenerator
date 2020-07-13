#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetVertexPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetVertexPosition"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vertexIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storePosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetVertexPosition*))(Il2CppBase() + 0x4F011C0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetVertexPosition*))(Il2CppBase() + 0x4F011D8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetVertexPosition*))(Il2CppBase() + 0x4F014EC))(this);
	}
	template <typename T = void> T DoGetVertexPosition() {
		return ((T (*)(GetVertexPosition*))(Il2CppBase() + 0x4F01204))(this);
	}

};

}
