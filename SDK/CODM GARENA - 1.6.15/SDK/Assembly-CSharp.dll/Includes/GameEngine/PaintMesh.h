#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PaintMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PaintMesh"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Filter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Render() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Mat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_Segment() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& m_Size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_VectList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_IndexList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_UVList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_Up() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_Depth() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_LastCheckTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CheckPosList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_CheckIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_BuildCoroutine() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPaintAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTextureReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildMeshCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init(int32_t segment, Il2CppVector2 size) {
		return ((T (*)(PaintMesh*, int32_t, Il2CppVector2))(Il2CppBase() + 0x2723D40))(this, segment, size);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PaintMesh*))(Il2CppBase() + 0x27241D8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PaintMesh*))(Il2CppBase() + 0x27244E8))(this);
	}
	template <typename T = uintptr_t> T GetPaintAssetID(int32_t itemID) {
		return ((T (*)(PaintMesh*, int32_t))(Il2CppBase() + 0x2724438))(this, itemID);
	}
	template <typename T = void> T SetTexture(uintptr_t texture) {
		return ((T (*)(PaintMesh*, uintptr_t))(Il2CppBase() + 0x2724760))(this, texture);
	}
	template <typename T = void> T BuildMesh(int32_t itemID, Il2CppVector3 dir, Il2CppVector3 up, float depth) {
		return ((T (*)(PaintMesh*, int32_t, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2724B18))(this, itemID, dir, up, depth);
	}
	template <typename T = void> T OnTextureReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(PaintMesh*, int32_t, uintptr_t))(Il2CppBase() + 0x2724F84))(this, assetID, obj);
	}
	template <typename T = bool> T CheckNull() {
		return ((T (*)(PaintMesh*))(Il2CppBase() + 0x272518C))(this);
	}
	template <typename T = uintptr_t> T BuildMeshCoroutine() {
		return ((T (*)(PaintMesh*))(Il2CppBase() + 0x2724EA4))(this);
	}

};

}
