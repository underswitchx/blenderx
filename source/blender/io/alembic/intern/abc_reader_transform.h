/* SPDX-FileCopyrightText: 2023 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

/** \file
 * \ingroup balembic
 */

#include "abc_reader_object.h"

#include <Alembic/Abc/IObject.h>
#include <Alembic/Abc/ISampleSelector.h>
#include <Alembic/AbcCoreAbstract/ObjectHeader.h>
#include <Alembic/AbcGeom/IXform.h>

struct Object;

namespace blender::io::alembic {

class AbcEmptyReader final : public AbcObjectReader {
  Alembic::AbcGeom::IXformSchema m_schema;

 public:
  AbcEmptyReader(const Alembic::Abc::IObject &object, ImportSettings &settings);

  bool valid() const override;
  bool accepts_object_type(const Alembic::AbcCoreAbstract::ObjectHeader &alembic_header,
                           const Object *const ob,
                           const char **r_err_str) const override;

  void readObjectData(Main *bmain, const Alembic::Abc::ISampleSelector &sample_sel) override;
};

}  // namespace blender::io::alembic
