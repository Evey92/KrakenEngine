#pragma once
#include "kraGraphicsBuffer.h"

namespace kraEngineSDK {
 
  template<typename TVERTEX>
  class KRA_CORE_EXPORT kraVertexBuffer : public kraGraphicsBuffer
  {

  public:
    kraVertexBuffer() {};
    ~kraVertexBuffer() { clearBuffer(); }

    /**
     * @brief Creates a vertex buffer.
     * @param size of te vertex, number of vertexes, and a flag for usage.
     */
    virtual void
      createVertexBuffer(uint32 vertexSize, uint32 numVertex/*, here should go the usage flag */ ) = 0;
    /**
     * @brief Reserves memory using the size of the object containing
     * the vertexes.
     * @param the size of the object containing the vertexes .
     */
    void
    reserve(size_t numObjects) = 0;
    

    /**
    * @brief Adds a single vertex to the buffer.
    * @param the address of the vertex.
    */
    void
    add(const TVERTEX& vertex) = 0;
    /**
    * @brief Copies a whole vertex vector into the buffer.
    * @param the vector containing the vertexes.
    */
    void
    add(const std::vector<TVERTEX>& vertices) = 0;

    /**
    * @brief Adds multiple vertexes onto the buffer.
    * @param A pointer to the start position of the vertexes, ad the number of vertexes.
    */
    void
      add(const TVERTEX* pVertices, size_t numVertices) = 0;

    /**
    * @brief Cleans the vertex buffer.
    */
    void
      clearBuffer() {
      m_vertexData.clear();
    }

  private:
    std::vector<TVERTEX> m_vertexData;

  };

}